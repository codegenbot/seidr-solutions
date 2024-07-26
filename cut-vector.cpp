if (cut_idx == 0) {
    cout << 1 << endl;
    cout << nums[cut_idx] << endl;
    cout << 0 << endl;
} else {
    for (int i = 0; i <= cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cut_idx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
}