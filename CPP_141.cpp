string file_name_check(string file_name){
    int dot_count = 0, digit_count = 0;
    bool valid = true;

    for(int i = 0; i < file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            dot_count++;
        }
        else if(isdigit(c)){
            digit_count++;
        }
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            // check the substring after the dot
            string sub = file_name.substr(i+1);
            if(sub.length() > 0 && (sub == "txt" || sub == "exe" || sub == "dll")){
                valid = true;
                break;
            }
            else{
                valid = false;
                break;
            }
        }
    }

    return (dot_count == 1 && digit_count <= 3) ? (valid ? "Yes" : "No") : "No";
}