#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int n = v.size();
    if(n==0)
        return res;
    
    res.push_back(v[n-1]);
    
    for(int i=n-2; i>=0; i--){
        if(v[i] >= v[i+1]){
            res.push_back(v[i]);
        }
    }
    
    return res;
}

int main() {
    vector<int> v = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(v);
    for (int num : result) {
        cout << num << " ";
    }
}