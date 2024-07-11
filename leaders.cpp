#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    int n = vec.size();
    vector<int> result;
    
    for(int i=n-1; i>=0; --i){
        if(i == n - 1 || vec[i] >= vec[i+1])
            result.push_back(vec[i]);
    }
    
    return result;
}