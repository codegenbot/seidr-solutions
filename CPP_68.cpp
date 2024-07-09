#include<vector>
using namespace std;

vector<int> pluck(vector<int> arr) {
    int min_even = INT_MAX;
    int index = -1;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]%2 == 0 && arr[i] < min_even) {
            min_even = arr[i];
            index = i;
        }
    }

    vector<int> result;
    if(index != -1) {
        result.push_back(min_even);
        result.push_back(index);
    } else {
        result.push_back(0);
        result.push_back(-1);
    }

    return result;
}