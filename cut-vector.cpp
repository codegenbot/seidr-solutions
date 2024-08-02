int main() {
    int n;
    std::cin >> n; 
    std::vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int diff = INT_MAX, cutIndex = 0;

    for (int i = 1; i < n; ++i) {
        int newDiff = abs(nums[i] - nums[i - 1]);
        if (newDiff < diff) {
            diff = newDiff;
            cutIndex = i;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i < cutIndex) {
            std::cout << nums[i] << " ";
        } else if (i > cutIndex) {
            std::cout << nums[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}