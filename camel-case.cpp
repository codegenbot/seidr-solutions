#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    for (int i = 0; i <= input.size(); ++i) {
        if (input[i] == '-') {
            input.replace(i, 1, "");
            i -= 1;
        } else if (input[i] == ' ') {
            input.replace(i, 1, "");
            i -= 1;
        } 
    }
    for(int i = 0; i < input.size(); ++i) {
        if(input[i] >= 'A' && input[i] <= 'Z') {
            input.insert(i++, " ");
        }
    }
    std::string result = "";
    bool isUpper = false;
    for (int i = 0; i < input.size(); ++i) {
        char c = input[i];
        if (c >= 'A' && c <= 'Z') {
            result += (isUpper ? " " : "").append(1, tolower(c));
            isUpper = true;
        } else if (c >= 'a' && c <= 'z') {
            result.append(1, c);
            isUpper = false;
        }
    }
    std::cout << result;
    return 0;
}