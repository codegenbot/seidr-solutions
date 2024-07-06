```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    sort(l.begin(), l.end());
    auto it = unique(l.begin(), l.end());
    return vector<int>(it, l.end());
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    for (auto i : unique(l)) {
        cout << i << " ";
    }
}