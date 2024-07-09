#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result = l;
    sort(result.begin(), result.end());
    auto last_unique = unique_copy(result.begin(), result.end(), result.begin());
    result.erase(last_unique, result.end());
    return result;
}

int main() {
    vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result = unique(v);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}