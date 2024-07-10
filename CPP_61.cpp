bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    std::string input_brackets;
    std::cout << "Enter brackets: ";
    std::cin >> input_brackets;

    if (correct_bracketing(input_brackets)) {
        std::cout << "Brackets are correctly matched." << std::endl;
    } else {
        std::cout << "Brackets are not correctly matched." << std::endl;
    }

    return 0;
}