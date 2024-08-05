#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int max_right = arr[n-1];
    for(int i=n-1; i>=0; i--){
        if(arr[i] >= max_right){
            leaders.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 3, 7, 1, 6};
    vector<int> leadersVec = leaders(arr);
    for(int leader : leadersVec) {
        cout << leader << " ";
    }
    return 0;
}