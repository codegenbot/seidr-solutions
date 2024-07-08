#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a[0] == b[0];
}

vector<int> pluck(vector<int> arr);

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> result = pluck(arr);
    
    for(int num : result){
        cout << num << " ";
    }
    
    return 0;
}

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int min_even = INT_MAX;
    int min_index = INT_MAX;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < min_even){
            min_even = arr[i];
            min_index = i;
        }
    }

    if(min_even != INT_MAX){
        result.push_back(min_even);
        result.push_back(min_index);
    }

    return result;
}