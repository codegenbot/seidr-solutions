// Print the two resulting subvectors
if (cut_idx == 0) {
    cout << nums[0] << endl;
    cout << nums[1] << endl;
} else {
    for (int i = 0; i <= cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cut_idx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
}