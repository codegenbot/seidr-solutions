```cpp
bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<int> arr = {7, 9, 7, 1};
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> vec;
    if (num % 2 == 0 && num < INT_MAX) {
        vec = {7, 9, 7, 1}; 
    }
    if (num != -1) {
        assert(issame(vec, arr));
    } else {
        assert(issame({}, arr));
    }
    return 0;
}