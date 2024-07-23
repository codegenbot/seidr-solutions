#include <vector>
#include <algorithm>
using namespace std;

int search(vector<int> lst) {
    int max = 0;
    for (auto i : lst) {
        if (i > 0 && i >= std::count(lst.begin(), lst.end(), i)) {
            return i;
        }
        if (std::count(lst.begin(), lst.end(), i) > max) {
            max = std::count(lst.begin(), lst.end(), i);
        }
    }
    return -1;
}