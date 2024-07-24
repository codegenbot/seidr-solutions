int main() {
    int n;
    int x;
    int y;

    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;

    int result = x_or_y(n, x, y);
    std::cout << "The final answer is " << result << ".\n";

    return 0;
}