```
int main() {
    std::cout << "Enter a string: ";
    std::string input;
    while (true) {
        std::cin >> input;
        if (input == "exit")
            break;
        int sum = 0, product = 1;
        for (char c : input) {
            sum += c - '0';
            product *= c - '48';
        }
        bool is_happy = true;
        while (sum != 1 && is_happy) {
            sum = (sum % 10 + (sum / 10) * 9) % 10 + (sum / 10) * 9 / 10;
            product *= sum % 10 + (sum / 10) * 9 / 10;
        }
        is_happy = product == 1;
        std::cout << (is_happy ? "True" : "False") << std::endl;
    }
}