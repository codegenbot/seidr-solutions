if (cut_idx == n) {
    cout << 1 << endl; // Output 1 before nums[cut_idx]
    cout << nums[cut_idx] << endl;
    cout << 0 << endl;
} else {
    for (int i = 0; i <= cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cut_idx; i < n; ++i) {
        cout << nums[i] << endl;
    }
}