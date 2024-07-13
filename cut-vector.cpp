for (int i = 0; i < n ; i++) {
    leftSum += nums[i];
    int rightSum = totalSum - leftSum;
    int diff = abs(leftSum - rightSum);
    if (diff <= minDiff) {
        minDiff = diff;
        cutIndex = i;
    }
}