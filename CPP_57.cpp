#include <vector>
using namespace std;

bool monotonic(vector<float> l) {
    bool inc = true, dec = true;
    for (int i = 1; i < l.size(); i++) {
        if ((l[i] > l[i-1]) && dec)
            dec = false;
        else if ((l[i] < l[i-1]) && inc)
            inc = false;
    }
    return inc || dec;
}