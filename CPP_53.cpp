int main() {
    int a;
    std::cout << "Enter number 1: ";
    std::cin >> a;

    int b;
    std::cout << "Enter number 2: ";
    std::cin >> b;

    int result = add(a, b);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}