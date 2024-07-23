int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str; 
    bool result = prime_length(str); 
    if (result) {
        std::cout << "Prime length" << std::endl;
    } else {
        std::cout << "Not prime length" << std::endl;
    }
    return 0;
}