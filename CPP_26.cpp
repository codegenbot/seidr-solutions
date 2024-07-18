bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

vector<int> remove_duplicates(vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    vector<int> numbers = {4, 2, 1, 2, 4, 3, 5};
    numbers = remove_duplicates(numbers);
    for (int num : numbers) {
        cout << num << " ";
    }
    return 0;
}