int main() {
    int n;
    std::cin >> n;
    if (!is_prime(n)) {
        std::cout << "The number is not prime." << std::endl;
    } else {
        std::cout << "The number is prime." << std::endl;
    }
    return 0;
}