#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> to_sort;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            to_sort.push_back(l[i]);
        }
    }
    sort(to_sort.begin(), to_sort.end());
    int idx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l[i] = to_sort[idx++];
        }
    }
    return l;
}