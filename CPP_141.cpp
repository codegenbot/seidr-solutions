string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            found_dot = true;
        }else if(isdigit(c)){
            digit_count++;
        }else if(found_dot && (c == 't' || c == 'x' || c == 'd' || c == 'l')){
            // check the substring after the dot
            string ext = file_name.substr(i+1);
            if(ext == "txt" || ext == "exe" || ext == "dll"){
                return "Yes";
            }else{
                return "No";
            }
        }else if(!found_dot && !isalpha(c)){
            return "No";
        }
    }
    if(digit_count > 3) return "No";
    if(!found_dot) return "No";
    return "Yes";
}