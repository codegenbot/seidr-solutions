Here is the completed code:

string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        }else if(isdigit(file_name[i])){
            digit_count++;
        }else if(!isalpha(file_name[i]) && i > 0){
            valid = false;
            break;
        }
    }

    if(dot_count != 1 || digit_count > 3 || file_name.find('.') == string::npos || 
       (file_name.substr(0, file_name.find('.')).find("txt") == string::npos &&
        file_name.substr(0, file_name.find('.')).find("exe") == string::npos &&
        file_name.substr(0, file_name.find('.')).find("dll") == string::npos)){
        valid = false;
    }

    return valid ? "Yes" : "No";
}