for (int i = 0; i < nums.size(); ++i) {
    prefixSum += nums[i];
    if (prefixSum == target) {
        index = i;
        break;
    }
    int diff1 = abs(prefixSum - target);
    int diff2 = abs(target - (prefixSum - nums[i]));
    if (diff1 < diff2) {
        index = i;
        break;
    }
}

for (int i = 0; i <= index; ++i) {
    cout << nums[i] << endl;
}
cout << "---" << endl;
for (int i = index; i < nums.size(); ++i) {
    cout << nums[i] << endl;
}