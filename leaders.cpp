#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int leader = arr[n-1];
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= leader) {
            leader = arr[i];
        } else {
            leaders.push_back(leader);
        }
    }
    
    leaders.push_back(leader);
    
    return leaders;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersResult = leaders(arr);
    for (int i : leadersResult) {
        cout << i << endl;
    }
    return 0;
}