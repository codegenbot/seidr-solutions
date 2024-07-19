#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    vector<int> array = a;

    if (array.empty()) {
        return array;
    }
    
    if ((array.front() + array.back()) % 2 == 0) {
        sort(array.begin(), array.end(), greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    
    return array;
}