#include <vector>
#include <algorithm>
#include <functional>
#include <cassert> 

using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    int first = array.front();
    int last = array.back();
    vector<int> sorted_array = array;

    if ((first + last) % 2 == 0) {
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }

    return sorted_array;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b; 
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    assert(issame(sort_array({11, 14, 21, 23}), {11, 14, 21, 23}));
    return 0;
}