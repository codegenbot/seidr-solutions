#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> res = l;
    for (size_t i = 0; i < l.size(); i += 3) {
        sort(res.begin() + i, min(res.begin() + i + 3, res.end()));
    }
    return res;
}