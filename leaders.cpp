#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxRightSoFar = arr[n - 1];
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] >= maxRightSoFar) {
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    return result;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for(int i=n-1;i>=0;--i){
        if(i==(n-1))
            result.push_back(arr[i]);
        else
            if(arr[i]>=result.back())
                result.push_back(arr[i]);
        
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