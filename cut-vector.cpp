// Print the two resulting subvectors
for (int i = 0; i <= cut_idx; ++i) {
    cout << nums[i] << endl;
}
// Print the cut boundary
cout << "0" << endl;
for (int i = cut_idx + 1; i < n; ++i) {
    cout << nums[i] << endl;
}