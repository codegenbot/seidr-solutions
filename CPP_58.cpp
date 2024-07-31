#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));

    return result;
}