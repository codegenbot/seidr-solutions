for (int i = 0; i < cutIdx; ++i) {
    cout << vec[i] << " ";
}
cout << endl;

for (int i = cutIdx; i < n; ++i) {
    cout << vec[i];
    if (i != n - 1) {
        cout << " ";
    }
}
cout << endl;