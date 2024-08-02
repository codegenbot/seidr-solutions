#include <vector>
#include <pair>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

pair<int,int> largest_smallest_integers(vector<int> lst) {
    int maxNegative = 0, minPositive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > maxNegative) {
            maxNegative = num;
        } else if (num > 0 && num < minPositive) {
            minPositive = num;
        }
    }
    return {(maxNegative > 0) ? maxNegative : 0, (minPositive < 1) ? minPositive : 0};
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
}