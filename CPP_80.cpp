int main{
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    if(is_happy(s)) {
        std::cout << "The string is happy." << std::endl;
    } else {
        std::cout << "The string is not happy." << std::endl;
    }
}