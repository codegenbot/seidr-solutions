int main() {
    std::string sentence; 
    std::getline(std::cin, sentence); 
    try {
        std::cout << words_in_sentence(sentence) << std::endl;
    } catch (...) {
        std::cerr << "Error: Invalid input. Please enter a valid sentence." << std::endl;
    }
    return 0;
}