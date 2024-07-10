#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(const vector<int>& x, const vector<int>& y) {
    return x == y;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return issame(const_cast<const std::vector<int>&>(a), const_cast<const std::vector<int>&>(b));
}

vector<int> remove_duplicates(vector<int> v) {
    vector<int> result;
    for (int x : v) { 
        bool found = false;
        if (result.empty()) {
            result.push_back(x);
        } else {
            for (int i = 0; i < result.size(); i++) { 
                if (x == result[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back(x);
            }
        }
    }
    return result;
}

int mainFunction() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        int x;
        cin >> x;
        v.push_back(x);
    }

    // sort the vector before removing duplicates
    sort(v.begin(), v.end());

    cout << "Duplicates removed: ";
    for (int i = 0; i < remove_duplicates(v).size(); i++) {
        cout << remove_duplicates(v)[i] << " ";
    }
    cout << endl;

    return 0;
}