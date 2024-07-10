```cpp
int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    double p = 1.0 - (double)1/(n-1)*m;
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << p << std::endl;
    return 0;
}