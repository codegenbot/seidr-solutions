```cpp
bool is_happy(const std::string& s) {
    int sum = 0;
    for (char c : s) {
        if (c >= 'a' && c <= 'f') {
            sum += (c - 'a' + 1);
        }
    }
    return sum == 9 || sum == 18 || sum % 19 == 0;
}

int main() {
    int result = 0;
    assert(is_happy("iopaxioi") == false);
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    for (char c : s) {
        if (c != 'a' && c != 'b' && c != 'c' && c != 'd' && c != 'e' && c != 'f') {
            result = 1;
            break;
        }
    }
    if (result == 0)
        std::cout << "The string is happy." << std::endl;
    else
        std::cout << "The string is not happy." << std::endl;
}