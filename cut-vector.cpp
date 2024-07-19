vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum1 += v[i];
        } else {
            sum2 += v[i];
        }
    }

    vector<vector<int>> res(2);
    int diff = abs(sum1 - sum2);

    res[0].push_back(v[0]);
    for (int i = 1; i < n; i++) {
        if (abs(sum1 - sum2) == diff) {
            res[0].push_back(v[i]);
        } else {
            break;
        }
    }

    int temp = 0;
    while (temp < n) {
        sum1 -= v[temp];
        sum2 += v[temp];

        if (abs(sum1 - sum2) <= diff) {
            res[0].push_back(v[temp]);
        } else {
            res.push_back(vector<int>(v.begin() + temp + 1, v.end()));
            break;
        }
        temp++;
    }

    return res;
}