int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }

    int n = input.size();
    int ans = INT_MAX;
    int cut_point = -1;

    for (int i = 1; i < n; ++i) {
        int left_sum = 0;
        int right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += input[j];
        }
        for (int j = i; j < n; ++j) {
            right_sum += input[j];
        }

        int diff = abs(left_sum - right_sum);
        if (diff < ans) {
            ans = diff;
            cut_point = i;
        }
    }

    for (int i = 0; i < cut_point; ++i) {
        cout << input[i] << "\n";
    }
    cout << "\n";

    for (int i = cut_point; i < n; ++i) {
        cout << input[i] << "\n";
    }
    cout << endl;

    return 0;
}