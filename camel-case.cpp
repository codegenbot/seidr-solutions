std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    
    for (char c : s) {
        if (c == '-') {
            if (!result.empty()) {
                result += ' ';
            }
            capitalizeNext = true;
        } else {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;
    return 0;
}