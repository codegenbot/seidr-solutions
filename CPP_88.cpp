#include <vector>
bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.empty()) {
        return a;
    }
    
    if ((a.front() + a.back()) % 2 == 0) {
        sort(a.begin(), a.end(), greater<int>());
    } else {
        sort(a.begin(), a.end());
    }
    
    return a;
}