int main { 
    std::vector<int> numbers;
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    double result = median(numbers);

    std::cout << "The median of the given array is: " << result << std::endl;

    return 0;
}