#include <vector>
using namespace std;

vector<int> leaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    
    if(n == 0)
        return res;
    
    res.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--){
        if(res.back() < arr[i])
            res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2}; 
    vector<int> leadersVec = leaders(arr);
    for(int i : leadersVec)
        cout << i << " ";
    return 0;
}