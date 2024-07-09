int main() {
    int n;    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> numbers;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    if (numbers.empty() || removeDuplicates(numbers).empty()) return 0;

    if (!isEqualVector(numbers, removeDuplicates(numbers))) {
        std::cout << "Unique numbers: ";
        for (int num : removeDuplicates(numbers)) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "All elements are duplicates." << std::endl;
    }

    if (!isEqualVector(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5})) {
        std::cout << "All elements are not duplicates." << std::endl;
    } else {
        std::cout << "All elements are duplicates." << std::endl;
    }
}