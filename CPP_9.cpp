#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> rolling_max(vector<int> numbers){
    vector<int> max_nums;
    int max_num = numbers[0];
    max_nums.push_back(max_num);
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
        max_nums.push_back(max_num);
    }
    return max_nums;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    
    return 0;
}