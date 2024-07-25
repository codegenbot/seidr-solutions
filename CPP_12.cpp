```cpp
int main() {
    std::vector<std::string> strings = {"x", "yyy", "zzzz", "www", "kkkk", "abc"};
    int maxLength = 0;
    for (const auto& str : strings) {
        if (str.length() > maxLength) {
            maxLength = str.length();
        }
    }
    std::cout << "The longest string is: " << maxLength << " characters long." << std::endl;
}