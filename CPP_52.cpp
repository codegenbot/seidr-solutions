#include <vector>

using namespace std;

bool below_threshold(vector<int> l, int t) {
    for (int i : l) {
        if (i >= t) {
            return false;
        }
    }
    return true;
}