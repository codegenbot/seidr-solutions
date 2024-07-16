#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    if(n == 0) return leaders; // Handle empty array

    leaders.push_back(arr[n-1]); // Rightmost element is always a leader

    for(int i=n-2; i>=0; i--){
        bool leader = true;
        for(int j=i+1; j<=n-1; j++){
            if(arr[j] >= arr[i]){
                leader = false;
                break;
            }
        }
        if(leader) leaders.push_back(arr[i]);
    }
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersResult = leaders(arr);
    cout << "Leaders: ";
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    cout << endl;
    return 0;
}