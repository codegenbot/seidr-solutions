#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> sort_array(vector<int> array) {
    if(array.empty()) return array;
    if((array.front() + array.back()) % 2 == 0)
        sort(array.begin(), array.end(), greater<int>());
    else
        sort(array.begin(), array.end());
    return array;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}