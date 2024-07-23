```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    if (n > 1) return true;
    return false;
}

bool prime_length(const std::string& str) {
    int len = 0;
    for (char c : str) {
        if (isalnum(c)) {
            len++;
        }
    }
    return isPrime(len);
}

int main_userInput() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str); 
    bool result = prime_length(str); 
    if (result) {
        std::cout << "Prime length" << std::endl;
    } else {
        std::cout << "Not prime length" << std::endl;
    }
    return 0;
}