bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> remove_duplicates(vector<int> numbers) {
    numbers.erase(unique(numbers.begin(), numbers.end(), issame), numbers.end());
    return numbers;
}

int main() {
    // Main function
    return 0;
}