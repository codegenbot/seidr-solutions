```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) return false;
    int sum = 0;
    for (int i : q) sum += i;
    return sum <= w;
}

int main() {
    bool will_it_fly(vector<int>, int);
    vector<int> q;
    int w;
    cout << "Enter the number of quarters: ";
    cin >> w;
    cout << "Enter the quarters: ";
    for (int i = 0; i < w; i++) {
        int quarter;
        cin >> quarter;
        q.push_back(quarter);
    }
    if (will_it_fly(q, w)) {
        cout << "The plane will fly." << endl;
    } else {
        cout << "The plane won't fly." << endl;
    }
    return 0;
}