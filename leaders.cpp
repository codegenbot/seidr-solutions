#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> result;
    int n = v.size();
    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(v[j] >= v[i]) {
                leader = false;
                break;
            }
        }
        if(leader) result.push_back(v[i]);
    }
    return result;
}