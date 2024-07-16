#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    
    if(n == 0)
        return leaders;
        
    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader)
            leaders.push_back(arr[i]);
    }
    
    return leaders;
}

int main() {
    vector<int> input = {16, 17, 4, 3, 5, 2};
    vector<int> leadersVec = leaders(input);
    cout << "Leaders: ";
    for (int leader : leadersVec) {
        cout << leader << " ";
    }
    cout << endl;
    return 0;
}