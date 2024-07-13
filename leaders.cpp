#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    int n = vec.size();
    vector<int> result;
    
    // The rightmost element is always a leader
    result.push_back(vec.back());
    
    for(int i = n - 2; i >= 0; --i) {
        if(vec[i] >= vec.back()) {
            result.push_back(vec[i]);
        }
        vec.pop_back();
    }
    
    return result;
}