for (int i = 0; i < nums.size() - 1; ++i) {
    prefixSum += nums[i];
    int diff = abs(2 * prefixSum - totalSum);
    if (diff <= minDiff) {
        minDiff = diff;
        index = i;
        if (minDiff == 0) {
            break;
        }
    }
}