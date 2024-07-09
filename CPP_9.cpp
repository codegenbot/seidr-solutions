#include <vector>
#include <algorithm>
#include <cassert>

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

int main(){
    vector<int> input = {3, 2, 3, 100, 3};
    vector<int> expected_output = {3, 3, 3, 100, 100};
    vector<int> result = rolling_max(input);
    assert(issame(result, expected_output));
    return 0;
}

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_num = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}