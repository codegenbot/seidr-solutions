#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    int n = vec.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        while(i<n-1 && vec[i] >= vec[n-1]) {
            n--;
        }
        if(i==n-1) break;
        res.push_back(vec[i]);
    }
    
    return res;
}