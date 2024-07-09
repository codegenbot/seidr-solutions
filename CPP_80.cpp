int main() {
    assert(is_happy("iopaxioi") == false);
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    if (is_happy(s))
        std::cout << "The string is happy." << std::endl;
    else
        std::cout << "The string is not happy." << std::endl;