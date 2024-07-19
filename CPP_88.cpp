```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0) {
        vector<int> result(array);
        sort(result.begin(), result.end(), greater<int>());
        return result;
    } else {
        vector<int> result(array);
        sort(result.begin(), result.end());
        return result;
    }
}

int main() {
    assert (issame(sort_array({21, 14, 23, 11}) , {23, 21, 14, 11}));
}