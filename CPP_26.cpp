bool issame(vector<int> a, vector<int> b) {
    // Add your implementation here
}

vector<int> remove_duplicates(vector<int>& numbers) {
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    // Add test cases and assertions here
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    
    return 0;
}