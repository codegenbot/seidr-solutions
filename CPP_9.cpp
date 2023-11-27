#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    // implementation of the function
}

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

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    // additional test cases...
    return 0;
}