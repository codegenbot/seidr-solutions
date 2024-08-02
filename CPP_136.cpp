#include <vector>
#include <climits>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int a = INT_MAX;
    int b = INT_MIN;

    for (int i : lst) {
        if (i < 0 && i > a) {
            a = i;
        }
        else if (i > 0 && i < b) {
            b = i;
        }
    }

    return {(a >= 0) ? 0 : a, (b <= 0) ? 0 : b};
}