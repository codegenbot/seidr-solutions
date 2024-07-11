string file_name_check(string file_name){
    int dot_count = 0, digit_count = 0;
    bool valid_name = true;

    for(int i = 0; i < file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        } else if(isdigit(file_name[i])){
            digit_count++;
        } else if((file_name[i] >= 'a' && file_name[i] <= 'z') || (file_name[i] >= 'A' && file_name[i] <= 'Z')){
            // check for valid extension
            string ext = file_name.substr(i+1);
            if(ext != "txt" && ext != "exe" && ext != "dll"){
                valid_name = false;
                break;
            }
        } else {
            valid_name = false;
            break;
        }
    }

    return (dot_count == 1 && digit_count <= 3) ? "Yes" : "No";
}