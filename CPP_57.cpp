#include <vector>

using namespace std;

bool monotonic(vector<int> l) {
    bool increasing = true, decreasing = true;
    size_t i; // Declare i before the loop
    for (i = 1; i < l.size(); ++i) {
        if (l[i] <= l[i - 1]) increasing = false;
        if (l[i] >= l[i - 1]) decreasing = false;
    }
    return increasing || decreasing;
}