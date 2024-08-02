for (int i = 0; i < n; ++i) {
    if (i == cutIndex) {
        cout << endl;
    } else if (i != cutIndex - 1) {
        cout << nums[i] << " ";
    } else {
        cout << nums[i] << endl;
    }
}