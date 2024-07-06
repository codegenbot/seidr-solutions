#include <vector>
#include <list>

using namespace std;

bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

vector<int> filter_integers(list< vector<int> > values) {
    vector<int> result;
    for (const auto& value : values) {
        bool duplicate = false;
        for (int x : value) {
            duplicate = false;
            for (int y : result) {
                if (y == x) {
                    duplicate = true;
                    break;
                }
            }
            if (!duplicate) {
                result.push_back(x);
            }
        }
    }
    return result;
}