```cpp
int main() {
    std::string s;
    bool capitalizeNext = false;
    std::string result;

    std::cin >> s;
    
    for (char c : s) {
        if (c == '-' || c == ' ') { 
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    std::cout << result;

    return 0;
}