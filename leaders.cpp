#include <vector>
#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> result = leaders(arr);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    result.push_back(arr.back());
    int maxRight = arr.back();
    for(int i=arr.size()-2; i>=0; --i){
        if(arr[i] >= maxRight){
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    return result;
}