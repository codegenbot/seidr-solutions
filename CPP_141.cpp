#include <iostream>
#include <string>

std::string file_name_check(std::string file_name) {
    if (file_name.back() == '.')
        return "No";
    else
        return "Yes";
}

int main() {
    std::cout << file_name_check("example.txt") << std::endl;
    std::cout << file_name_check("document.") << std::endl;

    return 0;
}