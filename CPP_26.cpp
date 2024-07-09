int main() {
    std::vector<int> numbers;
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }
    
    std::vector<int> unique_numbers = remove_duplicates(numbers);
    
    if (unique_numbers.size() == 1) {
        std::cout << "All elements are the same: " << unique_numbers[0] << std::endl;
    } else {
        std::cout << "Unique numbers: ";
        for (int num : unique_numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}