for (int i = 0; i < n - 1; ++i) {
    int leftSum = 0, rightSum = 0;
    for (int j = 0; j < n; ++j) {
        if (j < i) {
            leftSum += nums[j];
        } else {
            rightSum += nums[j];
        }
    }
    
    int currentDiff = abs(leftSum - rightSum);
    if (currentDiff <= diff) {
        diff = currentDiff;
        cutIndex = i;
    }
}

for (int i = 0; i <= cutIndex; ++i) {
    cout << nums[i] << " ";
}
cout << endl;
for (int i = cutIndex + 1; i < n; ++i) {
    cout << nums[i] << " ";
}