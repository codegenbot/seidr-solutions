#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    vector<int> left;
    vector<int> right;
    
    for (int i = 0; i < n - 1; i++) {
        left.push_back(v[i]);
        if (v[i] == v[i+1]) {
            break;
        }
    }
    
    for (int i = n - 1; i > 0; i--) {
        right.push_front(v[i]);
        if (v[i-1] == v[i]) {
            break;
        }
    }
    
    return {left, right};
}