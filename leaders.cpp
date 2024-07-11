#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    int n = v.size();
    vector<int> result;
    
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || v[i] >= v[i + 1])
            result.push_back(v[i]);
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}