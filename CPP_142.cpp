int main() {
    int n;
    std::cin >> n;
    if(n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
    } else {
        std::cout << sum_squares(n) << std::endl;
    }
}