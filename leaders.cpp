#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    if (n == 0) return leaders;
    
    int max_right = arr[n-1];
    leaders.push_back(max_right);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= max_right) {
            leaders.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return leaders;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<int> leaders = leaders(arr);
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}