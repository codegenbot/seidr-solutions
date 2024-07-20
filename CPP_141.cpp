string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(found_dot && (file_name[i] == 't' || file_name[i] == 'x' || file_name[i] == 'd' || file_name[i] == 'l')){
            string extension = "";
            for(int j=i+1; j<file_name.length(); j++){
                if(file_name[j] == '.')
                    break;
                else
                    extension += file_name[j];
            }
            if(extension != "txt" && extension != "exe" && extension != "dll")
                return "No";
        }
    }
    if(!found_dot || digit_count > 3) return "No";
    return "Yes";
}