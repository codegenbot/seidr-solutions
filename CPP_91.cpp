int main() {
    std::string input;
    std::cout << "Enter a string: ";
    getline(std::cin, input); 
    // Remove newline character
    while (input.back() == '\n') {
        input.pop_back();
    } 
    int result = is_bored(input);
    std::cout << "Count of 'I' at the beginning: " << result << std::endl;
    return 0;
}