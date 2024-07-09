int check_if_last_char_is_a_letter(const std::string &str) {
    if(str.empty()) {
        return -1; // or handle error as per your requirement
    }
    char lastChar = str.back();
    if (isalpha(lastChar)) { 
        return 1; 
    } else { 
        return 0; 
    }
}

int start() {
    int result;
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    result = check_if_last_char_is_a_letter(input);
    if(result == 1) {
        std::cout << "The last character is a letter.\n";
    } else if(result == 0) {
        std::cout << "The last character is not a letter.\n";
    } else {
        std::cout << "Invalid input. Please try again.\n";
    }
    return 0;
}

int main() {
    start();
}