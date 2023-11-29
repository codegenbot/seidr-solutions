#include <vector>
#include <algorithm>

bool is_same(vector<int> a, vector<int> b){
    return a == b;
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
    
    if(is_same(a, b)){
        vector<int> sorted_array = sort_array(a);
        for(int num : sorted_array){
            cout << num << " ";
        }
    } else {
        cout << "Vectors are not the same.";
    }
    
    return 0;
}