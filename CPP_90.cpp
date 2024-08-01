```cpp
int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1;
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1;
}

int main() {
    int number;
    cout << "Enter a list of numbers separated by spaces: ";
    cin >> number;
    vector<int> lst;
    while(number != -1) {
        lst.push_back(number);
        cout << "Enter the next number (-1 to finish): ";
        cin >> number;
    }
    if (lst.size() < 2)
        cout << "Error: List must contain at least two numbers.\n";
    else
        cout << "The next smallest number is " << next_smallest(lst) << ".\n";
    return 0;
}