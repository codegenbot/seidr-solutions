#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxRight = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int curr_max = arr.back();
    for(int i=arr.size()-1; i>=0; i--) {
        if(arr[i] >= curr_max) {
            res.push_back(arr[i]);
            curr_max = arr[i];
        }
    }
    return res;
}

int main() {
    vector<int> arr = {5, 2, 3, 4};
    vector<int> result = leaders(arr);
    for (int i : result) {
        std::cout << i << std::endl;
    }
    return 0;
}