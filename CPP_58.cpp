#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <cassert>
#include <set>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set<int> s1(l1.begin(), l1.end());
    for (int num : l2) {
        if (s1.count(num)) {
            result.push_back(num);
            s1.erase(num);
        }
    }
    return result;
}