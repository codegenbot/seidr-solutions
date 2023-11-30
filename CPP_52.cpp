#include <stdio.h>
#include <vector>
using namespace std;

bool below_threshold(vector<int> l, int t) {
    for (int i = 0; i < l.size(); i++) {
        if (l[i] >= t) {
            return false;
        }
    }
    return true;
}