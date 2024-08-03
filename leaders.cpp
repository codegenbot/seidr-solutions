#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2}; 
    vector<int> leadersVec = leaders(arr);
    for (int leader : leadersVec) {
        cout << leader << endl; 
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    int max_right = arr[n-1];
    for(int i=n-1; i>=0; i--){
        if(arr[i] >= max_right){
            max_right = arr[i];
            result.push_back(max_right);
        }
    }
    
    return result;
}