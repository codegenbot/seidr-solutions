int main() {
    vector<int> vec;
    int n;
    while (cin >> n) {
        vec.push_back(n);
    }

    int sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        sum += vec[i];
    }

    int target = sum / 2;
    int prefixSum = 0;
    int idx = -1;
    for (int i = 0; i < vec.size(); ++i) {
        prefixSum += vec[i];
        if (prefixSum >= target) {
            idx = i;
            break;
        }
    }

    if (prefixSum - target < target - (prefixSum - vec[idx])) {
        cout << idx + 1 << endl;
        for (int i = 0; i <= idx; ++i) {
            cout << vec[i] << endl;
        }
        cout << sum - prefixSum << endl;
    } else {
        cout << idx << endl;
        for (int i = 0; i < idx; ++i) {
            cout << vec[i] << endl;
        }
        cout << prefixSum << endl;
    }

    return 0;
}