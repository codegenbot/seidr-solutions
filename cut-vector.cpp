for (int i = 0; i < n - 1; ++i) {
    leftSum += vec[i];
    int rightSum = totalSum - leftSum;
    int diff = std::abs(leftSum - rightSum);

    if (diff < minDiff) {
        minDiff = diff;
        cutIndex = i;
    }
}