vector<int> vec = {1, 2, 3, 4};
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "Left: ";
    for (int i : result.first) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (int i : result.second) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}