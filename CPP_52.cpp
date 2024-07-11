```cpp
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
    vector<int> numbers;
    int threshold;
    cout << "Enter number of elements: ";
    cin >> numbers.size();
    for (int i = 0; i < numbers.size(); i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "Enter the threshold: ";
    cin >> threshold;
    if (below_threshold(numbers, threshold)) {
        cout << "All elements are below the threshold." << endl;
    } else {
        cout << "Not all elements are below the threshold." << endl;
    }
}