#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    sort(l.begin(), l.end());
    vector<int> result;
    for (auto i : l) {
        if (!binary_search(result.begin(), result.end(), i)) {
            result.push_back(i);
        }
    }
    return result;
}