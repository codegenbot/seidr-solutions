#include <vector>

bool issame(vector<int> a,vector<int>b){
    // Your implementation here
}

int main(){
    // Your code here
}

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallest_even = INT_MAX;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallest_even){
            smallest_even = arr[i];
            result.clear();
            result.push_back(smallest_even);
            result.push_back(i+1);
        }
    }

    return result;
}