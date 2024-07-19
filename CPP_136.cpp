#include <vector>
#include <algorithm>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result(2);

    if (any_of(lst.begin(), lst.end(), [](int x) { return x < 0; })) {
        result[0] = *min_element(ifstream(lst.begin(), lst.end(), [](int x) { return x < 0; }));
    } else {
        result[0] = 0;
    }

    if (any_of(lst.begin(), lst.end(), [](int x) { return x > 0; })) {
        result[1] = *min_element(ifstream(lst.begin(), lst.end(), [](int x) { return x > 0; }));
    } else {
        result[1] = 0;
    }

    return result;
}