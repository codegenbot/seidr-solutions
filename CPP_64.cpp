```cpp
int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            std::tolower(c) == 'y') {
            count++;
        }
    }
    return count;

}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    int vowelCount = vowels_count(str);
    std::cout << "Number of vowels: " << vowelCount << std::endl;
    return 0;
}