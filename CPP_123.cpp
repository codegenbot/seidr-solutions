vector<int> result;
    while (n != 1) {
        result.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    vector<int> odd_result;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_result.push_back(num);
        }
    }
    sort(odd_result.begin(), odd_result.end());
    return odd_result;