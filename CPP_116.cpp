```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), 
         [](int a, int b){
             if (bitset<64>(a).count() == bitset<64>(b).count()) {
                 return a < b;
             } else {
                 return bitset<64>(a).count() < bitset<64>(b).count();
             }
         });
    return arr;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {3, 2, 1};
    
    if (issame(a, sort_array(b))) {
        cout << "The arrays are same." << endl;
    } else {
        cout << "The arrays are not same." << endl;
    }
    
    return 0;
}