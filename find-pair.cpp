int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;

    map<int, int> indices;
    for (int i = 0; i < n; ++i) {
        if (indices.find(target - nums[i]) != indices.end()) {
            cout << nums[indices[target - nums[i]]] << endl;
            cout << nums[i] << endl;
            break;
        }
        indices[nums[i]] = i;
    }

    return 0;
}