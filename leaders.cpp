int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    std::vector<int> result = findLeaders(nums);
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    return 0;
}