#include <vector>
#include <string>

std::string file_name_check(std::string file_name){
    bool valid = true;
    int dot_count = 0;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        } else if(isdigit(file_name[i])){
            digit_count++;
        }
    }

    if(dot_count != 1 || digit_count > 3) {
        valid = false;
    }

    std::string before_dot = file_name.substr(0, file_name.find('.'));
    std::string after_dot = file_name.substr(file_name.find('.')+1);

    if(before_dot.empty() || !isalpha(before_dot[0])){
        valid = false;
    }

    std::vector<std::string> allowed_extensions = {"txt", "exe", "dll"};
    if(std::find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end()){
        valid = false;
    }

    return valid ? "Yes" : "No";
}