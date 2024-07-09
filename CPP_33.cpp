#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 != 0) {
            result.push_back(l[i]);
        } else {
            auto it = lower_bound(result.begin(), result.end(), l[i]);
            if (it == result.end()) {
                result.insert(it, l[i]);
            } else if (*it > l[i]) {
                it = result.insert(it, l[i]);
            }
        }
    }
    return result;
}

int main() {
    vector<int> test1 = {1, 2, 3};
    vector<int> test2 = {5, 6, 3, 4, 8, 9, 2};

    cout << "Test 1: ";
    for (auto x : sort_third(test1)) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Test 2: ";
    for (auto x : sort_third(test2)) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}