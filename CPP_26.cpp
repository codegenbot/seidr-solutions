bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 4, 4, 5};
    vector<int> unique_nums = remove_duplicates(nums);
    vector<int> expected = {1, 2, 3, 4, 5};
    if (issame(unique_nums, expected)) {
        cout << "Duplicates removed successfully" << endl;
    } else {
        cout << "Error in removing duplicates" << endl;
    }
    return 0;
}