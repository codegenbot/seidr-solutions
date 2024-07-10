int getMax(int n) {
    int max = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        if(x > max)
            max = x;
    }

    return max;
}