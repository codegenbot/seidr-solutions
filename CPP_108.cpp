```int main() {
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    std::vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter integer #"<<i+1<<": ";
        std::cin >> nums[i];
    }
    int result = count_nums(nums);
    std::cout << "Result: " << result << std::endl;
    return 0;
}```