int main() {
    int n, p;
    std::cout << "Enter n and p: ";
    std::cin >> n >> p;
    int result = modp(n, p);
    std::cout << "Result: " << result << std::endl;
    return 0;
}