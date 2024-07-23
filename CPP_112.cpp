int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::string chars;
    std::cout << "Enter characters to be removed: ";
    std::getline(std::cin, chars);
    std::vector<std::string> result = reverse_delete(s, chars);
    if (issame(result, {"", "True"})) {
        std::cout << "The reversed string with the specified characters removed is a palindrome." << std::endl;
    } else {
        std::cout << "The reversed string with the specified characters removed is not a palindrome." << std::endl;
    }
}