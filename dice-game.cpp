```cpp
int main() {
    double probability(int n, int m) {
        double p = 0;
        for (int i = 1; i < m; i++) { 
            for (int j = i + 1; j <= n; j++) { 
                p += 1 / (double)(n * m);
            }
        }
        return p;
    }
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << probability(n, m) << std::endl;
    return 0;
}