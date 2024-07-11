int search(const vector<int>& lst) {
    int result = -1;
    for (int num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num) {
            result = max(result, num);
        }
    }
    return result;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    // Additional test cases can be added here
    return 0;
}