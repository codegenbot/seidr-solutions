```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
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

int main() {
    vector<string> list1 = {"hello", "world", "java"};
    vector<string> list2 = {"hello", "world", "java"};

    bool same = issame(list1, list2);

    if (same) {
        cout << "The lists are the same" << endl;
    } else {
        cout << "The lists are not the same" << endl;
    }

    return 0;
}