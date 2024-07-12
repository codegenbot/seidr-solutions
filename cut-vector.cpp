if (cutIndex == 0 || cutIndex == n - 1) {
        cout << "1" << endl;
        for (int i = 0; i < n; i++) {
            cout << nums[i];
            if (i != n - 1) {
                cout << " ";
            }
        }
    } else {
        cout << "2" << endl;
        for (int i = 0; i <= cutIndex; i++) {
            cout << nums[i];
            if (i != cutIndex) {
                cout << " ";
            }
        }
        cout << endl;
        
        for (int i = cutIndex + 1; i < n; i++) {
            cout << nums[i];
            if (i != n - 1) {
                cout << " ";
            }
        }
    }