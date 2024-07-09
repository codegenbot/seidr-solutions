```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 3, 4}; 
    vector<int> leadersResult = leaders(arr);
    
    cout << "Leaders: ";
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    cout << endl;
    
    return 0; 
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if(n==1)
        return arr;
        
    int lastLeaderIndex=-1;
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= arr[i+1])
            lastLeaderIndex=i;
        else
            break;
    }
    
    result.push_back(arr[lastLeaderIndex]);
    for(int i=lastLeaderIndex-1; i>=0; i--){
        bool leader = true;
        for(int j=i+1; j<=lastLeaderIndex; j++){
            if(arr[j] >= arr[i]){
                leader = false;
                break;
            }
        }
        if(leader){
            result.push_back(arr[i]);
        }
    }

    return result;
}