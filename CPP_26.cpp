bool issame(vector<int> a, vector<int> b) {
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

void remove_duplicates(vector<vector<int>>& numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end(), issame), numbers.end());
}

int main() {
    vector<vector<int>> numbers = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}, {7, 8, 9}};
    remove_duplicates(numbers);
    return 0;
}