#include <string>

std::string fix_spaces(std::string text){
    std::string result = "";
    int consecutive_spaces = 0;
    for (char c : text) {
        if (c == ' ') {
            consecutive_spaces++;
            if (consecutive_spaces > 2) {
                result.pop_back();
                result.pop_back();
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result += c;
            consecutive_spaces = 0;
        }
    }
    return result;
}

int main() {
    std::string input = "Hello      world     from     C++";
    std::string output = fix_spaces(input);
    std::cout << output << "\n";
    return 0;
}