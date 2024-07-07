int main {
    double num1, num2;
    std::cout << "Enter two numbers: ";
    if (!(std::cin >> num1 >> num2)) {
        std::cerr << "Invalid input. Please enter two numbers." << std::endl;
        return 1;
    }
    int output = sum_squares({static_cast<double>(num1), static_cast<double>(num2)});
    std::cout << "Sum of squares is: " << output << std::endl;
    return 0;
}