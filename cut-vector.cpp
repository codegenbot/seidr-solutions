int totalSum = 0;
for (int i = 0; i < n; ++i) {
    totalSum += nums[i];
}

int leftSum = 0, rightSum = totalSum;
int cutIndex = -1;
int minDiff = INT_MAX;

for (int i = 0; i < n; ++i) {
    leftSum += nums[i];
    rightSum -= nums[i];
    int currentDiff = abs(leftSum - rightSum);
    if (currentDiff < minDiff) {
        minDiff = currentDiff;
        cutIndex = i;
    }
}

for (int i = 0; i <= cutIndex; ++i) {
    std::cout << nums[i] << std::endl;
}
std::cout << std::endl;
for (int i = cutIndex + 1; i < n; ++i) {
    std::cout << nums[i] << std::endl;
}