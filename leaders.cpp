#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    int n = vec.size();
    vector<int> result;
    
    if (n == 0)
        return result;
        
    for (int i = n - 1; i >= 0; i--) {
        bool is_leader = true;
        for (int j = i + 1; j < n; j++) {
            if (vec[i] < vec[j]) {
                is_leader = false;
                break;
            }
        }
        
        if (is_leader)
            result.push_back(vec[i]);
    }
    
    return result;
}