```
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {18,17,16,15,14,13};
    vector<int> leaders = leaders(arr);
    for(int i=0; i<leaders.size(); i++)
        cout << leaders[i] << " ";
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 1)
        return arr;
    
    for(int i=n-2; i>=0; i--) {
        while(i > 0 && arr[i] <= arr[i+1])
            i--;
        leaders.push_back(arr[i]);
    }
    
    leaders.push_back(arr[n-1]);
    
    return leaders;
}