#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    int n = vec.size();
    vector<int> res;
    for(int i=n-1; i>=0; i--){
        while(i<n-1 && vec[i] >= vec[i+1]){
            i--;
        }
        if(i == n - 1 || (i > 0 && vec[i] > vec[i-1])){
            res.push_back(vec[i]);
        }
    }
    reverse(res.begin(),res.end());
    return res;
}