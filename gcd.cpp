cout << "Enter two integers separated by space: ";
    long long a, b;
    cin >> a >> b;
    
    cout << gcd(a, b) << endl;

    cout << "Enter text string and target string separated by space: ";
    string text, target;
    cin >> text >> target;

    vector<int> result = findSubstringIndices(text, target);