#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> rolling_max(vector<int> numbers);

int main() {
    vector<int> numbers = {3, 1, 7, 5, 2, 6};
    vector<int> expected = {3, 3, 7, 7, 7, 7};
    vector<int> result = rolling_max(numbers);
    
    if(issame(result, expected)){
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

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