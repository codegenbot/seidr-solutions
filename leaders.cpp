int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    if (cin.fail() && !cin.eof()) {
        cin.clear();
        cin.ignore();
    }
    vector<int> result = findLeaders(nums);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}