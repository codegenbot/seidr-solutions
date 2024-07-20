std::string toCamelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (const auto& word : split(s, " -")) {
        result = (first) ? word : toupper(word[0]) + word.substr(1);
        first = false;
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    try {
        if(input.empty()) throw std::runtime_error("Error: Input string is empty");
        std::cout << toCamelCase(input) << std::endl;
    } catch(const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << '\n';
    }
    return 0;
}