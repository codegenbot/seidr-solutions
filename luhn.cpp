int main() {
    int digits[] = {4,3,2,1,8,7,6,5,4,3,2,1,8,7,6,5};
    int n = sizeof(digits) / sizeof(digits[0]);
    std::cout << luhn(digits, n) << std::endl;
    return 0;
}