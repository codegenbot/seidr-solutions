for (int i = 0; i < n; i++) {
    prefixSum += nums[i];
    int suffixSum = sum - prefixSum;
    int diff = abs(prefixSum - suffixSum);
    if (diff < minDiff || (diff == minDiff && prefixSum == suffixSum)) { // Update condition for a closer cut
        minDiff = diff;
        cutIndex = i;
    }
}

for (int i = 0; i <= cutIndex; i++) {
    cout << nums[i] << " ";
}
cout << endl;

for (int i = cutIndex; i < n; i++) {
    cout << nums[i] << " ";
}