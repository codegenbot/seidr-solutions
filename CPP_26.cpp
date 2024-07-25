bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    // Your main function code here
    return 0;
}