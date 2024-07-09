```cpp
bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0; i<n; ++i) {
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        lst.push_back(x);
    }
    if(is_sorted(lst)) {
        cout << "The list is sorted.\n";
    } else {
        cout << "The list is not sorted.\n";
    }
    return 0;
}