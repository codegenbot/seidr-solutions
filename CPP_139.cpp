long long special_factorial(int n){
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        long long fact = 1;
        for (int j = 1; j <= i; ++j) {
            fact *= j;
        }
        result *= fact;
    }
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    long long result = special_factorial(num);
    std::cout << "The special factorial of " << num << " is " << result << std::endl;
    return 0;
}