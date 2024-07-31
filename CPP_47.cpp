int main 
{
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::vector<int> numbers;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }
    std::cout << "Median: " << median(numbers) << std::endl;
    return 0;
}