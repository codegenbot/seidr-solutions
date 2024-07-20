#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    int n = vec.size();
    vector<int> result;
    
    for (int i = 0; i < n; i++) {
        bool is_leader = true;
        
        for (int j = i + 1; j < n; j++) {
            if (vec[j] >= vec[i]) {
                is_leader = false;
                break;
            }
        }
        
        if (is_leader) result.push_back(vec[i]);
    }
    
    return result;
}