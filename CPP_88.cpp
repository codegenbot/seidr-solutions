#include <vector>
#include <initializer_list>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(const vector<int>& array) {
    int total = 0;
    for (int num : array) {
        total += num;
    }
    if (total % 2 == 1)
        return array;
    else
        std::vector<int> reversed(array.rbegin(), array.rend());
        return reversed;
}