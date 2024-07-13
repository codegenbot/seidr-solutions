Here is the solution:

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(!found_dot && (file_name[i] < 'a' || file_name[i] > 'z') && (file_name[i] < 'A' || file_name[i] > 'Z')){
            return "No";
        }
    }
    if(found_dot){
        string extension = "";
        for(int i=file_name.length()-1; i>=0; i--){
            if(file_name[i] == '.'){
                break;
            }
            else{
                extension = file_name[i]+extension;
            }
        }
        if(extension != "txt" && extension != "exe" && extension != "dll"){
            return "No";
        }
    }
    else{
        return "No";
    }
    return "Yes";
}