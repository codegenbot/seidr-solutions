Here is the completed code:

string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        }
        else if(isdigit(file_name[i])){
            digit_count++;
        }
        else if(!isalpha(file_name[i]) && i != 0){
            valid = false;
            break;
        }
    }

    if(dot_count > 1 || digit_count > 3 || (dot_count == 0) || !valid){
        return "No";
    }
    else{
        size_t pos = file_name.find('.');
        string ext = file_name.substr(pos+1);
        if(ext != "txt" && ext != "exe" && ext != "dll"){
            return "No";
        }
        return "Yes";
    }
}