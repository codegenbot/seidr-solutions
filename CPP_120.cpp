#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool vector_comparison(vector<int> vec1, vector<int> vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    assert(vector_comparison(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));

    return 0;
}