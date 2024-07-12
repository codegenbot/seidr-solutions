for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    if (cutIndex == n - 1) {
        cout << nums[cutIndex] << endl;
    } else {
        for (int i = cutIndex + 1; i < n; i++) {
            cout << nums[i] << " ";
        }
    }