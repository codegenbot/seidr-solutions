#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b){
    return (a == b);
}

vector<int> sort_array(vector<int> array){
    if(array.empty()){
        return array;
    }
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};
    bool same = issame(a, b);
    vector<int> sorted = sort_array(a);
    return 0;
}