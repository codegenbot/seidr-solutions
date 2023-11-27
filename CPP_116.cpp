#include <vector>
#include <algorithm>
#include <cassert>

void sort_array(vector<int>& arr){
    sort(arr.begin(), arr.end(), [](int a, int b){
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if(countA == countB){
            return a < b;
        }
        return countA < countB;
    });
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    vector<int> input = {2, 4, 8, 16, 32};
    sort_array(input);
    assert (issame(input, {2, 4, 8, 16, 32}));

    return 0;
}