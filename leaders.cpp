#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 0)
        return leaders;
    
    int rightmost = arr[n-1];
    leaders.push_back(rightmost);
    
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= rightmost) {
            rightmost = arr[i];
            leaders.push_back(rightmost);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersRes = leaders(arr);
    for(int i=0; i<leadersRes.size(); i++) {
        cout << leadersRes[i] << " ";
    }
    return 0;
}