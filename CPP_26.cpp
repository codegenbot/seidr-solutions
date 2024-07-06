bool issame(vector<int> a, vector<int>b) {
    return (a.size() == b.size());
}

int main() {
    vector<int> numbers = {1,2,3,4,5};
    vector<int> result = remove_duplicates(numbers);
    assert(issame(result, {1, 2, 3, 4, 5}));
    return 0;
}