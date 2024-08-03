```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {17, 28, 4}; 
    vector<int> leadersVec = leaders(arr);
    for (int leader : leadersVec) {
        cout << leader << endl; 
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    int maxRight = arr.back(); // Initialize the maximum right element
    
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i]; 
        }
    }
    
    return result;
}