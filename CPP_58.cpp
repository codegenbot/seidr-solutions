```c++
#include <iostream>
#include <vector>
using namespace std;

bool isSame(vector<int> a, vector<int> b) {
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

int compareArrays() {
    int n;
    cin >> n;
    vector<int> user_input1, user_input2;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        user_input1.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        user_input2.push_back(x);
    }
    if (isSame(user_input1, user_input2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}