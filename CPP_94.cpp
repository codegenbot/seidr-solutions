int main_test() {
    int num;
    std::cout << "Enter the list of numbers (space separated): ";
    std::cin >> num;
    // code to read the vector
    std::vector<int> lst = {num};
    std::cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << std::endl;
    return 0;
}