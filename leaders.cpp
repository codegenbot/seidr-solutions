#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxRight = arr.back(); // initialize with the last element
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] >= maxRight)
            result.push_back(arr[i]);
        else
            maxRight = arr[i]; // update maxRight
    }
    return result;
}

int main() {
    vector<int> arr = {17, 22, 20, 10, 12};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}