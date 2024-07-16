for (int i = 0; i < n; i++) {
    prefixSum += nums[i];
    int suffixSum = sum - prefixSum;
    int diff = abs(prefixSum - suffixSum);

    if (diff < minDiff || (diff == minDiff && abs(prefixSum - suffixSum) < minDiff)) {
        minDiff = diff;
        cutIndex = i + 1;
    }
}

for (int i = 0; i < cutIndex; i++) {
    std::cout << nums[i] << std::endl;
}
for (int i = cutIndex; i < n; i++) {
    std::cout << nums[i] << std::endl;
}

if (minDiff == INT_MAX) {
    std::cout << "No valid cut found." << std::endl;
}

return 0;