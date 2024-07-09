#include <vector>
#include <cmath>
using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-5) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenVals;
            for (int k = 0; k < l.size(); k++) {
                if (k % 2 == 0) {
                    evenVals.push_back(l[k]);
                }
            }
            sort(evenVals.begin(), evenVals.end());
            result[j++] = evenVals[0];
        } else {
            result[j++] = l[i];
        }
    }
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}