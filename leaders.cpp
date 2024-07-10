#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> leaders;
    int n = v.size();
    if(n == 0) return leaders;
    
    leaders.push_back(v[n-1]);
    
    for(int i = n - 2; i >= 0; i--) {
        if(v[i] >= v[i+1]) {
            leaders.push_back(v[i]);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}