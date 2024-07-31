```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    return vector<int>(s.begin(), s.end());
}

int main() {
    vector<int> result = unique({5, 3, 5, 2, 3, 3, 9, 0, 123});
    for(int i: result) cout << i << " ";
    return 0;
}