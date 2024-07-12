```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {17, 28, 4, 27, 29, 34, 5, 2};
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
    {
        result.push_back(arr[0]);
    }
    else
    {
        result.push_back(arr[n-1]);
        
        for(int i=n-2; i>=0; i--) {
            bool leader = true;
            for(int j=i+1; j<n; j++) {
                if(arr[j] >= arr[i]) {
                    leader = false;
                    break;
                }
            }
            
            if(leader) {
                result.push_back(arr[i]);
            }
        }
    }
    
    return result;
}