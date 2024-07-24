#include <iostream>
#include <sstream>
#include <algorithm>

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
            std::string temp = "";
            temp += (input[i]);
            input.insert(i++, " ");
            input.insert((i-1), temp);
            i--;
        }
    }
    std::string result = "";
    bool isUpper = false;
    for (int i = 0; i < input.size(); ++i) {
        char c = input[i];
        if (c >= 'A' && c <= 'Z') {
            result += (isUpper ? "" : "") + tolower(c);
            isUpper = true;
        } else if (c >= 'a' && c <= 'z') {
            result += c;
            isUpper = false;
        }
    }
    std::cout << result;