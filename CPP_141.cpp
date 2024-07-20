Here is the completed code:

string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
            if(dot_count > 1) {
                valid = false;
                break;
            }
        } else if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) {
                valid = false;
                break;
            }
        } else if(!isalpha(file_name[i]) && file_name[i] != '.'){
            valid = false;
            break;
        }
    }

    if(valid){
        string extension = file_name.substr(file_name.find('.') + 1);
        if(extension == "txt" || extension == "exe" || extension == "dll"){
            return "Yes";
        } else {
            return "No";
        }
    } else {
        return "No";
    }
}