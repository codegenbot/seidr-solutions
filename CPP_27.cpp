#include <iostream>
#include <string>

std::string flip_case(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Usage: ./program_name <string_to_flip_case>\n";
        return 1;
    }
    
    std::string str(argv[1]);
    std::cout << flip_case(str) << std::endl;

    return 0;
}