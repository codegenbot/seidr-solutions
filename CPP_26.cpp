bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1.size() == v2.size() && equal(v1.begin(), v1.end(), v2.begin());
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> uniqueNumbers;
    for (int num : numbers) {
        if (count(numbers.begin(), numbers.end(), num) == 1) {
            uniqueNumbers.push_back(num);
        }
    }
    return uniqueNumbers;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}