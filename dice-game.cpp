```cpp
int main() {
    int n, m;
    std::cout << "Enter the number of sides on Peter's die: ";
    if (!(std::cin >> n) || n <= 0) {
        std::cerr << "Invalid input. Please try again.\n";
        return -1;
    }
    std::cout << "Enter the number of sides on Colin's die: ";
    if (!(std::cin >> m) || m <= 0) {
        std::cerr << "Invalid input. Please try again.\n";
        return -1;
    }
    double p = 0;
    for (int i = 1; i < m; i++) { 
        for (int j = i + 1; j <= n; j++) { 
            p += 1 / (double)(n * m);
        }
    }
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << p << std::endl;
    return 0;
}