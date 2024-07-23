```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()).end());
    return remove_if(result.begin(), result.end(), [i](int x) {return count(result.begin(), i, x) > 1;}) -> base();
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result = unique(l);
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}