bool issame(vector<int>& a, vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end(), issame), numbers.end());
    return numbers;
}

int main() {
    vector<int> test1 = {1, 2, 2, 3, 4, 4, 5};
    vector<int> result1 = remove_duplicates(test1);
    assert(result1 == vector<int>({1, 2, 3, 4, 5}));

    vector<int> test2 = {1, 1, 1, 1, 1};
    vector<int> result2 = remove_duplicates(test2);
    assert(result2 == vector<int>({1}));

    return 0;
}