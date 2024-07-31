#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) {
        return {};
    }
    if ((array.front() + array.back()) % 2 == 0) {
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}