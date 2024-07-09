int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    if (std::cin.eof()) {
        std::cout << basement(nums) << std::endl;
    }
    return 0;
}