#include <iostream>
#include <string>

std::string file_name_check(std::string file_name){
    int dot_pos = file_name.find('.');
    if(dot_pos == std::string::npos || dot_pos > 0 && !isalpha(file_name[0])){
        return "No";
    }
    std::string before_dot = file_name.substr(0, dot_pos);
    std::string after_dot = file_name.substr(dot_pos + 1);
    int digit_count = 0;
    for(char c : before_dot) if(isdigit(c)) digit_count++;
    if(digit_count > 3 || after_dot != "txt" && after_dot != "exe" && after_dot != "dll"){
        return "No";
    }
    return "Yes";
}

int main(){
    assert (file_name_check("s.") == "No");
    std::cout << file_name_check("a.txt") << std::endl;
    std::cout << file_name_check("b.123.dll") << std::endl;
    return 0;
}