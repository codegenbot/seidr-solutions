#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_num = numbers[0];
    for(int i=0; i<numbers.size(); i++){
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}