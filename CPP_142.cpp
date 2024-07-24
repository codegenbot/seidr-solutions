int main2() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    if (n > 0) {
        std::cout << "Sum of squares is: " << sum_squares(n) << std::endl;
    } else {
        std::cout << "Please enter a positive integer." << std::endl;
    }
    return 0;
}