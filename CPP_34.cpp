#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

vector<int> unique(vector<int> l) {
    unordered_set<int> s(l.begin(), l.end());
    return vector<int>(s.begin(), s.end());
}