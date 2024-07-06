```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string file_name_check(std::string file_name) {
    int count = 0;
    bool has_dot = false;
    //Here is the completed code:
    for(int i = 0; i < file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
        }
        else if(file_name[i] == '.'){
            has_dot = true;
        }
        else if(has_dot && (file_name[i] == 't' || file_name[i] == 'x' || file_name[i] == 'd' || file_name[i] == 'l')){
            return "Yes";
        }
    }
    if(count > 3 || !has_dot || file_name[0] < 'a' || file_name[0] > 'z' && file_name[0] < 'A' || file_name[0] > 'Z'){
        return "No";
    }
    return "Yes";
}

int main() {
    std::string file_name;
    std::cout << "Enter a file name: ";
    std::cin >> file_name;
    std::cout << file_name_check(file_name) << std::endl;
    return 0;
}