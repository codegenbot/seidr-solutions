#include <string>

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
        else if(found_dot && (file_name[i] != 't' && file_name[i] != 'x' && file_name[i] != 'e' && file_name[i] != 'd' && file_name[i] != 'l')){
            return "No";
        }
    }
    if(!found_dot) return "No";
    string extension = "";
    for(int i=file_name.length()-1; i>=0; i--){
        if(file_name[i] == '.'){
            break;
        }
        else{
            extension += file_name[i];
        }
    }
    if(extension.length() > 4 || (extension != "txt" && extension != "exe" && extension != "dll")) return "No";
    return "Yes";