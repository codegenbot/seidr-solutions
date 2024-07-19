```cpp
int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::string output = flip_case(input);
    std::cout << output << std::endl;
    return 0; 
}