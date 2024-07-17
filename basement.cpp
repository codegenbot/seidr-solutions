int main() {
    std::vector<int> nums;
    int num;
    while (!std::cin.eof()) {
        std::cin >> num;
        nums.push_back(num);
    }
    nums.pop_back(); // Remove the last input as it is not needed
    std::cout << basement(nums) << std::endl;
    return 0;
}