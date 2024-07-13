for (int i = 0; i < n; i++) {
    leftSum += nums[i];
    int rightSum = totalSum - leftSum;
    int currentDiff = abs(leftSum - rightSum);
    
    if (currentDiff < minDiff) {
        minDiff = currentDiff;
        cutIndex = i;
    }
}

for (int i = 0; i <= cutIndex; i++) cout << nums[i] << " ";
cout << endl;
for (int i = cutIndex; i < n; i++) cout << nums[i] << " ";
cout << endl;