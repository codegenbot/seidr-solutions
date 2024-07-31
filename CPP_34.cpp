```
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> result(s.begin(), s.end());
    return result;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    l = unique(l);
    for(int i: l) cout << i << " ";
    return 0;