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
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main() {
    // Add your test cases and assertions here
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {5, 4, 3, 2, 1};
    
    if(issame(a, b)){
        cout << "The arrays are the same" << endl;
    } else {
        cout << "The arrays are different" << endl;
    }
    
    return 0;
}