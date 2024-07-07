```c++
#include <vector>
using namespace std;

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

int main() {
    vector<int> arr = {12, 10, 8, 6, 4};
    vector<int> leadersArr = leaders(arr);
    for (int leader : leadersArr) {
        cout << leader << " ";
    }
    return 0;
}