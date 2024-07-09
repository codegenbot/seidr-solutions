int main() {
    std::string input;
    std::cout << "Enter your string: ";
    std::getline(std::cin, input);
    std::string output;
    for (char c : input) {
        if (isupper(c)) {
            output += tolower(c);
        } else if (islower(c)) {
            output += toupper(c);
        } else {
            output += c;
        }
    }
    return 0;
}