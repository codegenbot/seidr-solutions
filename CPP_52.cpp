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
    cout << "Enter the number of elements in the array: ";
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    if(below_threshold(arr, 5)) {
        cout << "All numbers are below the threshold.\n";
    } else {
        cout << "At least one number is not below the threshold.\n";
    }
}