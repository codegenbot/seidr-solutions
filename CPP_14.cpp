int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Invalid input. Please enter a non-empty string." << std::endl;
    } else {
        std::vector<std::string> result = all_prefixes(input);
        if (!issame(result)) {
            std::cout << "The prefixes are not the same." << std::endl;
        } else {
            std::cout << "The prefixes are the same." << std::endl;
        }
    }

    if (!issame(all_prefixes("WWW"))) {
        std::cout << "The prefixes are not the same." << std::endl;
    } else {
        std::cout << "The prefixes are the same." << std::endl;
    }

    return 0;
}