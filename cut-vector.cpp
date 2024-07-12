int prefixSum = 0;
int minDiff = INT_MAX/2;
int cutIndex = -1;

if (n == 1) {
    cout << "1" << endl << nums[0];
    return 0;
}

for (int i = 1; i < n; i++) {
    prefixSum += nums[i-1];
    int suffixSum = sum - prefixSum;
    int diff = abs(prefixSum - suffixSum);
    
    if (diff < minDiff) {
        minDiff = diff;
        cutIndex = i;
    }

    if (diff == 0) {
        break;
    }
}

cout << "2" << endl;

for (int i = 0; i < cutIndex; i++) {
    cout << nums[i] << " ";
}
cout << endl;
for (int i = cutIndex; i < n; i++) {
    cout << nums[i] << " ";
}