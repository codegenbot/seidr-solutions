// Modify the conditions in the final output section to properly handle the edge cases when cutIndex is 0 or n-1.
if (cutIndex == 0) {
    cout << "1" << endl;
    cout << "1" << endl;
    cout << nums[0] << endl;
    cout << n - 1 << " ";
    for (int i = 1; i < n; i++) {
        cout << nums[i] << " ";
    }
} else if (cutIndex == n - 1) {
    cout << "1" << endl;
    cout << n - 1 << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << nums[n - 1] << endl;
} else {
    cout << "2" << endl;
    cout << cutIndex + 1 << " " << n - cutIndex << endl;
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (int i = cutIndex + 1; i < n; i++) {
        cout << nums[i] << " ";
    }
}