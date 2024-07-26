// Print the two resulting subvectors
for (int i = 0; i <= cut_idx; ++i) {
    cout << nums[i] << endl;
}

for (int i = cut_idx + 1; i < n; ++i) {
    // Change this to avoid new line after each element
    cout << nums[i];
}