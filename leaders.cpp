#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 0) return leaders;
    
    int max_right = arr[n-1];
    leaders.push_back(max_right);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= max_right) {
            max_right = arr[i];
            leaders.push_back(max_right);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5, 9};
    vector<int> result = leaders(arr);
    // print or use the result as needed
    return 0;
}