int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::string chars;
    std::cout << "Enter characters to delete: ";
    std::getline(std::cin, chars);
    auto output = reverse_delete(s, chars);
    if (issame(output, {"True", "abccba"})) {
        std::cout << "The reversed string is a palindrome.\n";
    } else {
        std::cout << "The reversed string is not a palindrome.\n";
    }
}