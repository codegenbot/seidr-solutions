```cpp
int vowels_count(std::string s) {
    int count = 0;
    bool has_y = false;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        } else if (c == 'y') {
            has_y = true;
        }
    }
    return count + (has_y ? 1 : 0);
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    int result = vowels_count(s);
    return 0;
}