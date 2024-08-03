```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
    vector<int> q = {1,2,3};
    int w = 6;
    cout << will_it_fly(q,w);
    return 0;
}