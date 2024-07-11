bool issame(int num1, int num2) {
    if (num1 == num2) {
        return true;
    }
    else {
        return false;
    }
}

vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(num);
        }
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    vector<string> result;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (!issame(stoi(result[i].erase(0, 1)), stoi(result[i+1].erase(0, 1)))) {
            result.push_back("Zero");
        }
    }

    return result;
}