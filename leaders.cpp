#include <vector>
using namespace std;

vector<int> leaders(vector<int> a) {
    int n = a.size();
    vector<int> result;
    
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || a[i] >= a[i + 1]) {
            result.push_back(a[i]);
        }
    }
    
    return result;
}