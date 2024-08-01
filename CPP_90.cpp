```cpp
int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; // or any other value that represents None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; // or any other value that represents None
}

int main() {
    vector<int> lst;
    int num;
    cout << "Enter the numbers separated by space: ";
    while (cin >> num) {
        lst.push_back(num);
    }
    if (lst.size() > 0)
        cout << "Next smallest number is: " << next_smallest(lst) << endl;
    else
        cout << "No numbers entered." << endl;
}