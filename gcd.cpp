```cpp
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    int result = gcd(a, b);
    std::cout << "GCD: " << result << std::endl;
    return 0;
}