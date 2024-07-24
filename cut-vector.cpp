int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }

    int total_sum = accumulate(input.begin(), input.end(), 0);
    int curr_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < input.size(); ++i) {
        curr_sum += input[i];
        int diff = abs(curr_sum - (total_sum - curr_sum));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    for (int i = 0; i <= cut_index; ++i) {
        cout << input[i] << endl;
    }
    cout << endl;
    for (int i = cut_index + 1; i < input.size(); ++i) {
        cout << input[i] << endl;
    }

    return 0;
}