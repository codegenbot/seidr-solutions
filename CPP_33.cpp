#include <vector>
#include <cassert>

using namespace std;

vector<int> sort_third(vector<int> l) {
    for (size_t i = 2; i < l.size(); i += 3) {
        for (size_t j = i; j > 0 && l[j] < l[j - 1]; j--) {
            swap(l[j], l[j - 1]);
        }
    }
    return l;
}