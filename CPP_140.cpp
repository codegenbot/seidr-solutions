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
    std::string input;
    std::cout << "Enter a string with spaces: ";
    std::getline(std::cin, input);

    std::string fixed_text = fix_spaces(input);
    std::cout << "Fixed text: " << fixed_text << std::endl;

    return 0;
}