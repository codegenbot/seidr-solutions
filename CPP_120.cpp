std::vector<int> sortDescendingAndPickMaxKElements(std::vector<int> numbers, int k) {
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    numbers.resize(k);
    return numbers;
}