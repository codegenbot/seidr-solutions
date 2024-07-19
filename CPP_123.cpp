vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);

    vector<int> odd_nums;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_nums.push_back(num);
        }
    }

    sort(odd_nums.begin(), odd_nums.end());

    return odd_nums;
}