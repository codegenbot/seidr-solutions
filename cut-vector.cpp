int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }

    int n = input.size();
    int left_sum = 0, right_sum = 0;
    for (int i = 0; i < n; i++) {
        right_sum += input[i];
    }

    int min_diff = abs(left_sum - right_sum);
    int cut_position = -1;

    for (int i = 0; i < n; i++) {
        left_sum += input[i];
        right_sum -= input[i];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_position = i;
        }
    }

    for (int i = 0; i <= cut_position; i++) {
        cout << input[i] << endl;
    }

    cout << 0 << endl;

    for (int i = cut_position + 1; i < n; i++) {
        cout << input[i] << endl;
    }

    return 0;
}