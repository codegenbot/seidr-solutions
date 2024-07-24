#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> rolling_max(vector<int> numbers);

int main() {
    vector<int> numbers = {1, 3, 5, 2, 6, 4};
    vector<int> result = rolling_max(numbers);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    cout << issame(a, b) << endl;

    return 0;
}

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_val = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_val = max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}