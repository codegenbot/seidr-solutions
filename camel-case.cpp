```cpp
int main() {
    std::string str;
    std::cin >> str;
    bool capitalizeNext = true;
    std::string result;

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    std::cout << result << std::endl;

    return 0;
}