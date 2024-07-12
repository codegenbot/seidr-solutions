int main() {
    vector<int> input;
    int n;
    while (cin >> n) {
        input.push_back(n);
    }
    
    int sum = 0;
    for (int num : input) {
        sum += num;
    }

    int target = sum / 2;
    int prefixSum = 0;
    int i = 0;
    while (prefixSum < target) {
        prefixSum += input[i];
        i++;
    }

    if (prefixSum == target || prefixSum - input[i-1] == target) {
        for (int j = 0; j < i; j++) {
            cout << input[j] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int j = 0; j < i-1; j++) {
            cout << input[j] << endl;
        }
        cout << 0 << endl;
    }

    return 0;
}