

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool result = move_one_ball(arr);

    cout << (result ? "true" : "false") << endl;

    return 0;