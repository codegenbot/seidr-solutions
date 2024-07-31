#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!std::is_integral(a[i]) || !std::is_integral(b[i])) continue;
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> filter_integers(const vector<int>& arr) {
    vector<int> result;
    for (int x : arr) {
        if (std::is_integral(x)) { 
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
        assert(issame(filter_integers(arr), {3, 3, 3})); 
        cout << "Array is same." << endl;
    }
    return 0;
}