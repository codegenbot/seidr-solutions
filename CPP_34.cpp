#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    result = unique_copy(l.begin(), l.end(), back_inserter(result));
    sort(result.begin(), result.end());
    return result;
}