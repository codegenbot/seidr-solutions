#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

vector<int> sort_third(const vector<int>& l) {
    vector<int> result = l;
    vector<int> to_sort;
    
    // Collect elements at indices divisible by 3
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            to_sort.push_back(l[i]);
        }
    }
    
    // Sort the collected elements
    sort(to_sort.begin(), to_sort.end());
    
    // Place the sorted elements back into their original positions
    int sort_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            result[i] = to_sort[sort_index++];
        }
    }
    
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}