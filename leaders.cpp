#include <vector>
#include <algorithm>
#include <iostream> 
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    for(int i=n-1; i>=0; i--){
        if(result.empty() || arr[i] >= max(result.begin(),result.end())){
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {5, 2, 3, 4};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}