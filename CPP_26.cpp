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

void remove_duplicates(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end(), issame), numbers.end());
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 4, 1, 5};
    remove_duplicates(numbers);
    return numbers;
}