int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    input.erase(input.find('\n')); 
    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;
    return 0;
}