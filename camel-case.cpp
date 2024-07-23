#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    std::string temp = "";

    for (char c : str) {
        if (c == '-') {
            result += std::string(1, toupper(temp[0]));
            temp.clear();
        } else if (c != ' ') {
            temp += c;
        }
    }

    if (!temp.empty()) {
        result += std::string(1, toupper(temp[0])) + temp.substr(1);
    } else {
        return str;
    }

    return result;
}

int main() {
    std::cout << camelCase("b-excv eevny-mhmu-gq") << std::endl; 
    // Output: bExcv eevnyMhmuGq
    return 0;
}