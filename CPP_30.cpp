int main() {
    float num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if (check_numbers({num1}, {num2})) {
        float result = get_positive(num1);
        std::cout << "The positive of the numbers is: " << result << std::endl;
    } else {
        std::cout << "The numbers are not same." << std::endl;
    }

    return 0;
}