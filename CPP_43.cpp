#include <vector>
#include <algorithm>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    vector<int> vec(l);
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i] + vec[vec.size() - 1 - i] == 0)
            return true;
    }
    return false;
}