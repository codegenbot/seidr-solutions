```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    
    vector<int> q1 = {1,2,3};
    int w1 = 6;
    if (will_it_fly(q1, w1)) {
        cout << "The quad will fly.\n";
    } else {
        cout << "The quad won't fly.\n";
    }
    
    vector<int> q2 = {1,2,3,4};
    int w2 = 5;
    if (will_it_fly(q2, w2)) {
        cout << "The quad will fly.\n";
    } else {
        cout << "The quad won't fly.\n";
    }
    
    return 0;
}