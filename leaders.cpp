#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxSoFar = arr.back();
    
    for(int i = arr.size() - 1; i >= 0; --i) {
        if(arr[i] >= maxSoFar) {
            maxSoFar = arr[i];
            result.push_back(maxSoFar);
        }
    }
    
    return result;
}

int main() {
    vector<int> input = {1, 3, 4, 2, 3};
    vector<int> result = leaders(input);
    for (int x : result) cout << x << " ";
    return 0;
}