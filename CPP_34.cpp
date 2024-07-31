```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

set<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    return s;
}

int main() {
    set<int> result = unique({5, 3, 5, 2, 3, 3, 9, 0, 123});
    for(int i: result) cout << i << " ";
    return 0;
}