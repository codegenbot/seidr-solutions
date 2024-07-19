#include <vector>
#include <algorithm>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result(2, 0);

    if (!lst.empty()) {
        auto neg = std::min_element(lst.begin(), lst.end(),
            [](int a, int b){ return a > b; });
        auto pos = std::max_element(lst.begin(), lst.end(),
            [](int a, int b){ return a < b; });

        if (neg != lst.end()) {
            result[0] = *neg;
        }
        if (pos != lst.begin()) {
            result[1] = *pos;
        }
    }

    return result;
}