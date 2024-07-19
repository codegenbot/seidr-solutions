#include <string>

std::string fix_spaces(const std::string& text) {
    std::string result = "";
    int consecutive_spaces = 0;
    for (char c : text) {
        if (c == ' ') {
            consecutive_spaces++;
            if (consecutive_spaces > 2) {
                result.pop_back();
                result.pop_back();
                result += '-';
            } else {
                result += '_';
            }
        } else {
            consecutive_spaces = 0;
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input_text = "your_input_here";
    std::string result = fix_spaces(input_text);
    return 0;
}