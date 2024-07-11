bool below_threshold(vector<int> numbers, int threshold) {
    for (int num : numbers) {
        if (num >= threshold) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(not(below_threshold({1, 8, 4, 10}, 10)));
    cout << below_threshold({5, 7, 3, 2}, 6) << endl; // Should print: 1
}