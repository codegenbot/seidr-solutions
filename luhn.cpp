int main() {
    int digits[] = {4,3,2,8,6,5,9,1,7,3,2,8,4};
    int length = sizeof(digits) / sizeof(*digits);
    int result = luhn(digits, length);
    std::cout << "Luhn sum: " << result << std::endl;
    return 0;
}