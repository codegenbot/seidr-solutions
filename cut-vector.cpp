cout << cutIndex + 1 << endl;
for (int i = 0; i <= cutIndex; i++) {
    cout << nums[i];
    if (i != cutIndex) {
        cout << " ";
    }
}
cout << endl;

cout << n - cutIndex - 1 << endl;
for (int i = cutIndex + 1; i < n; i++) {
    cout << nums[i];
    if (i != n - 1) {
        cout << " ";
    }
}