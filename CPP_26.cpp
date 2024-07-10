bool issame(vector<int> vec1, vector<int> vec2) {
    return vec1.size() == vec2.size() && equal(vec1.begin(), vec1.end(), vec2.begin());
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