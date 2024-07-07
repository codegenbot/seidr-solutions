string file_name_check(string file_name){
    bool valid = true;
    int count_dot = 0;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            count_dot++;
            if(count_dot > 1) {
                valid = false;
                break;
            }
        } else if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3){
                valid = false;
                break;
            }
        } else if(!isalpha(file_name[i])){ // check for latin alphabet
            valid = false;
            break;
        }
    }

    if(valid && (file_name.find("txt") != string::npos || file_name.find("exe") != string::npos || file_name.find("dll") != string::npos)){
        return "Yes";
    } else {
        return "No";
    }
}