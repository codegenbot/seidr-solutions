for (int i = 0; i <= cutIndex; i++) {
    cout << nums[i];
    if (i != cutIndex) {
        cout << ' ';
    }
}
cout << '\n';

for (int i = cutIndex + 1; i < n; i++) {
    cout << nums[i];
    if (i != n - 1) {
        cout << ' ';
    }
}
cout << '\n';