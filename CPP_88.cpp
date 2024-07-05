#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>
using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    vector<int> result = array;
    int sum = array.front() + array.back();
    if (sum % 2 == 0) {
        sort(result.begin(), result.end(), greater<int>());
    } else {
        sort(result.begin(), result.end());
    }
    return result;
}

int main() {
    assert(sort_array({21, 14, 23, 11}) == vector<int>{23, 21, 14, 11});
    assert(sort_array({1, 2, 3, 4}) == vector<int>{4, 3, 2, 1});
    assert(sort_array({5, 3, 7, 9}) == vector<int>{3, 5, 7, 9});
    return 0;
}