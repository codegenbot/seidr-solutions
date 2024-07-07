```cpp
std::string s;
int main() {
    std::string s;
    std::string result = "";
    bool capitalizeNext = false;

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

    std::cout << result << std::endl;

    return 0;
}