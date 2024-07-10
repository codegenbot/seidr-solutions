#include <string>

std::string file_name_check(std::string file_name){
    int digit_count = 0;
    bool found_dot = false;
    bool valid_prefix = true;

    for(int i = 0; i < file_name.size(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else{
            if(!found_dot)
                valid_prefix = isalpha(file_name[i]);
            else
                break;
        }
    }

    return (digit_count <= 3 && found_dot && valid_prefix) ? "Yes" : "No";
}