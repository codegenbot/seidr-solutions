```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {16,17,4,3,5,2}; 
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
    vector<int> leaders;
    int current_max = arr[n-1];
    leaders.push_back(current_max);
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= current_max){
            current_max = arr[i];
            leaders.push_back(current_max);
        }
    }
    return leaders;
}