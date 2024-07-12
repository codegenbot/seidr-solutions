int main() {
    vector<int> vec;
    int n;
    while (cin >> n) {
        vec.push_back(n);
    }

    int total_sum = 0;
    for (int num : vec) {
        total_sum += num;
    }

    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < vec.size(); ++i) {
        prefix_sum += vec[i];
        int suffix_sum = total_sum - prefix_sum;
        int diff = abs(prefix_sum - suffix_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    for (int i = 0; i <= cut_index; ++i) {
        cout << vec[i] << endl;
    }
    cout << endl;
    for (int i = cut_index + 1; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }

    return 0;
}