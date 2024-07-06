int main_test() {
    int num;
    std::cout << "Enter the list of numbers (space separated): ";
    std::cin >> num;

    std::vector<int> lst;
    while(num != -1) {
        lst.push_back(num);
        std::cout << "Enter the next number (-1 to finish): ";
        std::cin >> num;
    }

    std::cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << std::endl;
    return 0;
}