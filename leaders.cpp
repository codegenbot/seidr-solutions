#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        if(res.empty() || arr[i] >= res.back()) {
            res.push_back(arr[i]);
        }
    }
    
    reverse(res.begin(), res.end());
    
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersArr = leaders(arr);
    for(int i=0; i<leadersArr.size(); i++) {
        cout << leadersArr[i] << " ";
    }
    return 0;
}