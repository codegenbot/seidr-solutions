#include<iostream>
#include<vector>
using namespace std;

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallest_even = -1;
    int smallest_index = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)){
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    
    if(smallest_even != -1){
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }
    
    return result;
}

int main() {
    vector<int> nodes = {5, 0, 3, 0, 4, 2};
    vector<int> result = pluck(nodes);
    
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    
    return 0;
}