int main() {
    vector<int> nums;
    int num;

    // Read input until end-of-file
    while (cin >> num) {
        nums.push_back(num);
    }

    vector<int> result = findLeaders(nums);
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }
    return 0;
}