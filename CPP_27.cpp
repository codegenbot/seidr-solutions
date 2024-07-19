int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::string output = flipCase(input); 
    std::cout << output << std::endl;
    return 0; 
}