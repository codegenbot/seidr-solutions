```cpp
int remove_vowels(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (!isvowel(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
    return 0;
}