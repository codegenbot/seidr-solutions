#include <vector>
#include <algorithm>

using namespace std;

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    vector<int> res = l;
    for (size_t i = 0; i < l.size(); i += 3) {
        sort(res.begin() + i, min(res.end(), res.begin() + i + 3));
    }
    return res;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));

    return 0;
}