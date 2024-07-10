#include <string>

std::string file_name_check(std::string file_name) {
    if (file_name.length() > 4 && file_name.substr(file_name.length()-4).compare(".txt") == 0) {
        return "This is a .txt file";
    } else {
        return "This is not a .txt file";
    }
}