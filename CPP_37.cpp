int main() {
    std::vector<float> testNumbers = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(testNumbers);
    
    std::vector<float> expectedSortedNumbers = {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    assert(issame(testNumbers, expectedSortedNumbers));

    for (const auto& num : testNumbers) {
        std::cout << num << " ";
    }
    return 0;
}