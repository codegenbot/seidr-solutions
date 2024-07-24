#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

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
    vector<int> input = {1, 3, 5, 2, 8};
    vector<int> output = rolling_max(input);

    for(int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }
    cout << endl;

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