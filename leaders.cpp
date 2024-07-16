#include <vector>
using namespace std;

vector<int> leaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--){
        bool isLeader = true;
        for(int j=i+1; j<n; j++){
            if(arr[j] >= arr[i]){
                isLeader = false;
                break;
            }
        }
        if(isLeader){
            res.push_back(arr[i]);
        }
    }
    
    return res;
}

int main() {
    vector<int> inputVector;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        inputVector.push_back(num);
    }
    vector<int> result = leaders(inputVector);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}