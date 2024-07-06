#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (count(binary(a).begin(), binary(a).end(), '1') <
            count(binary(b).begin(), binary(b).end(), '1')) {
            return true;
        } else if (count(binary(a).begin(), binary(a).end(), '1') ==
                   count(binary(b).begin(), binary(b).end(), '1')) {
            return a < b;
        }
        return false;
    });
    return arr;
}