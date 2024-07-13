int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    try {
        if (sentence.empty()) {
            throw std::runtime_error("Error: Invalid input. Please enter a valid sentence.");
        }
        size_t space = sentence.find(' ');
        if (space != std::string::npos) {
            std::cout << sentence.substr(0, space) << std::endl;
        } else {
            std::cout << sentence << std::endl;
        }
        std::cout << "Number of words: " << count_words(sentence) << std::endl;
    } catch (...) {
        std::cerr << "Error: Invalid input. Please enter a valid sentence." << std::endl;
    }
    return 0;
}