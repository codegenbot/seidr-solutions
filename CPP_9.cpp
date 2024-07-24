#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rolling_max(vector<int> numbers);

bool issame(vector<int> a, vector<int> b){
    return a == b;
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
    vector<int> numbers = {3, 1, 7, 5, 9, 2};
    vector<int> expected = {3, 3, 7, 7, 9, 9};
    vector<int> result = rolling_max(numbers);
    if(issame(result, expected)){
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    return 0;
}