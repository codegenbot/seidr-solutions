```cpp
int main() {
    std::string input;
    std::cout << "Enter your string (in kebab-case): ";
    std::getline(std::cin, input);
    
    while(std::cin.peek() == '\n') { 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    
    std::cout << "Camel Case: " << camelCase(input) << std::endl;
    return 0;
}