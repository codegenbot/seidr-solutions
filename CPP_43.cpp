#include <vector>
#include <algorithm>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    vector<int> vec(l);
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] * -1 == vec[vec.size() - i - 1])
            return true;
    }
    return false;
}