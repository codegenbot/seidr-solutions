```c
int main() {
    double result = 1.0;
    for (int i = 1; i <= 5; i++) {
        result -= 1.0 / 6.0;
    }
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << "\n";
    return 0;
}