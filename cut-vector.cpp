int main() {
    vector<int> inputVec;
    int input;
    while (cin >> input) {
        inputVec.push_back(input);
    }

    int sum = 0;
    for (int i = 0; i < inputVec.size(); ++i) {
        sum += inputVec[i];
    }
    int target = sum / 2;
    int prefixSum = 0;
    int diff = INT_MAX;
    int idx = -1;
    for (int i = 0; i < inputVec.size(); ++i) {
        prefixSum += inputVec[i];
        int newDiff = abs(prefixSum - target);
        if (newDiff < diff) {
            diff = newDiff;
            idx = i;
        }
    }

    for (int i = 0; i <= idx; ++i) {
        cout << inputVec[i] << endl;
    }
    for (int i = idx + 1; i < inputVec.size(); ++i) {
        cout << inputVec[i] << endl;
    }

    return 0;
}