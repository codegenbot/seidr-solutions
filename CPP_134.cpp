int start() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if(ch == 'z' || ch == 'Z') {
        std::cout << "The last character is Z." << std::endl;
    }
    else if(isalpha(ch)) {
        std::cout << "The last character is a letter." << std::endl;
    }
    else {
        std::cout << "The last character is not a letter." << std::endl;
    }

    return 0;
}

int main() {
    start();
}