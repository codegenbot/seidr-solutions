#include <vector>
#include <algorithm>
#include <initializer_list>
using namespace std;

namespace MyNamespace {
    bool isSame(const vector<int>& a, const vector<int>& b) {
        return equal(a.begin(), a.end(), b.begin());
    }

    vector<vector<int>> largest_smallest_integers(vector<int> lst) {
        int max_negative = 0;
        int min_positive = INT_MAX;

        for(int i : lst) {
            if(i < 0 && i > max_negative) {
                max_negative = i;
            } else if(i > 0 && i < min_positive) {
                min_positive = i;
            }
        }

        return {{max(max_negative, 0), min(min_positive, 1)}};
    }
}