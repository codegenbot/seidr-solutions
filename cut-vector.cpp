for (int i = 0; i < n; ++i) {
    leftSum += vec[i];
    int rightSum = totalSum - leftSum;
    int diff = std::abs(leftSum - rightSum);

    if (diff <= minDiff) {
        minDiff = diff;
        cutIndex = i;
    }
}

std::cout << cutIndex + 1 << std::endl;

for (int i = 0; i <= cutIndex; ++i) {
    std::cout << vec[i] << " ";
}
std::cout << std::endl;

for (int i = cutIndex + 1; i < n; ++i) {
    std::cout << vec[i] << " ";
}
std::cout << std::endl;