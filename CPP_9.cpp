#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> rolling_max(vector<int> numbers);

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

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_val = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_val = max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}

int main(){
    vector<int> numbers = {1, 3, 5, 2, 8, 7};
    vector<int> expected = {1, 3, 5, 5, 8, 8};
    
    vector<int> result = rolling_max(numbers);
    
    if(issame(result, expected)){
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}