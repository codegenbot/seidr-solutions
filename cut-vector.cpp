int n;
std::cin >> n;
std::vector<int> nums(n);
for (int i = 0; i < n; ++i) {
    std::cin >> nums[i];
}

int minDiff = std::abs(std::accumulate(nums.begin(), nums.end(), 0) - nums[0]);
int cutSpot = 0;

for (int i = 1; i < n; ++i) {
    int sum1 = std::accumulate(nums.begin(), nums.begin() + i, 0);
    int sum2 = std::accumulate(nums.begin() + i, nums.end(), 0);
    int diff = std::abs(sum1 - sum2);

    if (diff < minDiff) {
        minDiff = diff;
        cutSpot = i;
    }
}

for (int i = 0; i < cutSpot; ++i) {
    std::cout << nums[i] << " ";
}
std::cout << std::endl;
for (int i = cutSpot; i < n; ++i) {
    std::cout << nums[i] << " ";
}