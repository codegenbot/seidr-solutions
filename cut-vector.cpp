int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int diff = INT_MAX;
    int cut = -1;

    for (int i = 1; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++) {
            sum1 += nums[j];
        }
        for (int j = i; j < n; j++) {
            sum2 += nums[j];
        }
        int new_diff = abs(sum1 - sum2);
        if (new_diff < diff) {
            diff = new_diff;
            cut = i;
        }
    }

    cout << cut << endl;
    for (int i = 0; i < cut; i++) {
        cout << nums[i] << endl;
    }
    for (int i = cut; i < n; i++) {
        cout << nums[i] << endl;
    }

    return 0;
}