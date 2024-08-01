Here is the completed code:

string file_name_check(string file_name){
    int dot_count = 0, digit_count = 0;
    bool valid = true;

    for(int i = 0; i < file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            dot_count++;
        } else if(isdigit(c)){
            digit_count++;
        } else if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
            // Check for valid extensions
            string extension = "";
            while(i < file_name.length() && file_name[i] != '.'){
                i++;
            }
            i++; // Skip the dot
            while(i < file_name.length() && isalnum(file_name[i])){
                extension += file_name[i];
                i++;
            }
            if(extension == "txt" || extension == "exe" || extension == "dll"){
                // Check for valid number of dots and digits
                if(dot_count > 1 || digit_count > 3){
                    valid = false;
                    break;
                }
            } else{
                valid = false;
                break;
            }
        } else{
            valid = false;
            break;
        }
    }

    return valid ? "Yes" : "No";
}