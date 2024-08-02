std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += ((c - base + 2 * 26) % 26) + base;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(encrypt("a") == "e");
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << "Encrypted string: " << encrypt(s) << std::endl;
    return 0;
}