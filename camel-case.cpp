int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str); 
    std::cout << "camelCase: " << camelCase(str) << std::endl;
    return 0;
}