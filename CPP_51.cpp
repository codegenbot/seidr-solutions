int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
    return 0;
}

std::string remove_vowels(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (!isvowel(c)) {
            result += c;
        }
    }
    return result;
}

bool isvowel(char ch) {
    char c = tolower(ch);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}