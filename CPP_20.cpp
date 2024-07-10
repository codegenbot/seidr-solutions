int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<float> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    std::vector<std::pair<float, float>> result = find_closest_elements(numbers);

    if (!result.empty()) {
        std::cout << "The closest pair of elements is (" << result[0].first << ", " << result[0].second << ")" << std::endl;
    } else {
        std::cout << "No pairs found." << std::endl;
    }

    return 0;
}