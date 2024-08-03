#include <vector>

bool issame(vector<int> a, vector<int> b){
    // your implementation
}

vector<int> sort_array(vector<int> array){
    if(array.empty()) return array;
    int sum = array.front() + array.back();
    if(sum % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}

int main(){
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
}