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
    if (lst.size() > 0) {
        int result = next_smallest(lst);
        if (result == -1)
            cout << "No smaller number found." << endl;
        else
            cout << "The next smallest number is: " << result << endl;
    } else {
        cout << "No numbers entered." << endl;
    }
    return 0;
}