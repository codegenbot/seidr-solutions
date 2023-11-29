#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> sort_array(vector<int> array){
    if(array.size() <= 1){
        return array;
    }
    
    int sum = array[0] + array[array.size() - 1];
    if(sum % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    
    return array;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main() {
    // Add your test cases and assertions here
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    vector<int> c = {1, 3, 2};
    
    // Test issame function
    bool result1 = issame(a, b);  // true
    bool result2 = issame(a, c);  // false
    
    // Test sort_array function
    vector<int> array = {3, 1, 2};
    vector<int> sortedArray = sort_array(array);  // {1, 3, 2}
    
    return 0;
}