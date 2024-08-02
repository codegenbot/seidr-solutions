```cpp
bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    bool balanced = false;
    if (str == reverse(str).str()) {
        balanced = true;
    }
    return balanced && accumulate(q.begin(), q.end(), 0) <= w;
}

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    vector<int> q = {1,2,3};
    int w = 6;
    if (will_it_fly(q,w)) {
        cout << "The plane will fly." << endl;
    } else {
        cout << "The plane won't fly." << endl;
    }
    return 0;
}