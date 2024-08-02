for (int i = 0; i < n; ++i) {
    if (i < cutIndex) {
        cout << nums[i] << " ";
    } else if (i == cutIndex) {
        cout << endl;
    } else {
        cout << nums[i] << " ";
    }
}

if (cutIndex == n - 1) {
    cout << endl;
}