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
    cout << "Enter numbers, each followed by Enter. To finish, enter -1.\n";
    while (cin >> num) {
        if (num < 0)
            break;
        lst.push_back(num);
    }
    if (lst.size() > 0) {
        int result = next_smallest(lst);
        cout << "The smallest number greater than all numbers in the list is: " << result << endl;
    } else
        cout << "No numbers entered.\n";
    return 0;
}