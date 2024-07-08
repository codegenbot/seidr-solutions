```cpp
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
    for(char c : str) {
        if(!isVowel(c)) {
            result += c;
        }
    }
    return result;
}

bool isVowel(char c) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for(char vowel : vowels) {
        if(c == vowel) {
            return true;
        }
    }
    return false;
}