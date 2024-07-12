int main() {
    vector<int> vec;
    int n;
    while (cin >> n) {
        vec.push_back(n);
    }

    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 1; i < vec.size(); ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += vec[j];
        }
        for (int j = i; j < vec.size(); ++j) {
            sum2 += vec[j];
        }
        int diff = abs(sum1 - sum2);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    for (int i = 0; i < cut_index; ++i) {
        cout << vec[i] << endl;
    }
    cout << endl;
    for (int i = cut_index; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }

    return 0;
}