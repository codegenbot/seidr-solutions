int main() {
    std::string str;
    int maxLen = 10; // define maximum length for the string here
    while (str.length() > maxLen) {
        std::cout << "Enter a string (length should not exceed " << maxLen << "): ";
        std::cin >> str; 
    }
    bool result = prime_length(str); 
    if (result) {
        std::cout << "Prime length" << std::endl;
    } else {
        std::cout << "Not prime length" << std::endl;
    }
    return 0;
}