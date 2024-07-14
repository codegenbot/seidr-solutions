#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    int max = arr[n-1]; // Initialize the maximum as the last element
    
    for(int i=n-2; i>=0; i--) {
        if(max <= arr[i]) { 
            max = arr[i];
            res.push_back(arr[i]); 
        }
    }
    
    return res;
}

int main() {
    vector<int> result(5, 0);
    for (int i : {18}) {
        result[4] = i;
    }
    for(int x : leaders(result)) {
        cout << x << " ";
    }
}