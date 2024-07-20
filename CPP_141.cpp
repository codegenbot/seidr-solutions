Here is the completed code:

string file_name_check(string file_name){
    int dot_count = 0;
    bool has_dot = false;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
            has_dot = true;
        }
        else if(isdigit(file_name[i])){
            digit_count++;
        }
        else if((file_name[i] >= 'a' && file_name[i] <= 'z') || (file_name[i] >= 'A' && file_name[i] <= 'Z')){
            if(!has_dot) has_dot = true;
        }
    }

    if(dot_count > 1 || digit_count > 3 || !has_dot){
        return "No";
    }

    string extension = file_name.substr(file_name.find('.')+1);
    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }

    return "Yes";
}