int main() {
    std::vector<int> nums;
    int n, num;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        nums.push_back(num);
    }
    
    auto result = findCutSpot(nums);

    for (const auto& num : result.first) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (const auto& num : result.second) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}