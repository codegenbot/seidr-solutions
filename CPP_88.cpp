#include <vector>

bool sort_array(vector<int> a, vector<int> b) {
    if(a.empty()) return b;
    if((a.front() + a.back()) % 2 == 0) {
        sort(a.begin(), a.end(), greater<int>());
    } else {
        sort(a.begin(), a.end());
    }
    return a == b;
}