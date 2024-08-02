#include <iostream>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for(int i = 0; i < k; i++){
        result.push_back(*max_element(arr.begin(), arr.end()));
        arr.erase(remove(arr.begin(), arr.end(), *max_element(arr.begin(), arr.end())), arr.end());
    }
    return result;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    int k = 3;
    vector<int> output = maximum(arr,k);
    for(int i = 0; i < output.size(); i++){
        cout << output[i] << " ";
    }
    return 0;
}