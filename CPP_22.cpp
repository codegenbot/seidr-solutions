#include <iostream>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> filter_integers(const vector<int>& arr) {
    vector<int> result;
    for (int x : arr) {
        if (is_integral(x)) { 
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = x;
    }
    if (arr.size() != filter_integers(arr).size()) { 
        cout << "Error: The array must only contain integers." << endl;
    } else {
        bool same = issame(filter_integers(arr), vector<int>{3, 99, 3, 3, 97, 98});
        if (!same) {
            cout << "Array is not same." << endl;
        } else {
            cout << "Array is same." << endl;
        }
    }
    return 0;
}