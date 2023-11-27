#include <iostream>
#include <string>

std::string file_name_check(std::string file_name);

int main() {
    std::string file_name;
    std::cin >> file_name;
    std::cout << file_name_check(file_name);
    return 0;
}

std::string file_name_check(std::string file_name){
    int dot_index = file_name.find(".");
    if(dot_index == std::string::npos){
        return "No";
    }
    std::string name_before_dot = file_name.substr(0, dot_index);
    std::string extension = file_name.substr(dot_index + 1);

    if(name_before_dot.empty() || !isalpha(name_before_dot[0])){
        return "No";
    }

    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }

    int digit_count = 0;
    for(char c : name_before_dot){
        if(isdigit(c)){
            digit_count++;
        }
    }

    if(digit_count > 3){
        return "No";
    }

    return "Yes";
}