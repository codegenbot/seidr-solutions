#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> array);

bool is_same(vector<int> a, vector<int> b);

vector<int> sort_array(vector<int> array){
    vector<int> sorted_array = array;
    if(sorted_array.empty()){
        return sorted_array;
    }
    int sum = sorted_array[0] + sorted_array[sorted_array.size()-1];
    if(sum % 2 == 0){
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}

bool is_same(vector<int> a, vector<int> b){
    // Implementation of the is_same function
}

int main(){
    assert (is_same(sort_array({21, 14, 23, 11}) , {23, 21, 14, 11}));
    // Rest of the code
    return 0;
}