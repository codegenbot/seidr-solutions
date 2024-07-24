int main() {
    vector<int> nums;
    string line;

    while (getline(cin, line)) {
        nums.push_back(stoi(line));
    }

    int min_diff = INT_MAX;
    int cut_spot = 0;

    for (int i = 1; i < nums.size(); i++) {
        int left_sum = 0;
        int right_sum = 0;

        for (int j = 0; j < i; j++) {
            left_sum += nums[j];
        }

        for (int j = i; j < nums.size(); j++) {
            right_sum += nums[j];
        }

        int diff = abs(left_sum - right_sum);

        if (diff < min_diff || (diff == min_diff && i < cut_spot)) {
            min_diff = diff;
            cut_spot = i;
        }
    }

    for (int i = 0; i < cut_spot; i++) {
        cout << nums[i] << endl;
    }

    cout << endl;

    for (int i = cut_spot; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }

    return 0;
}