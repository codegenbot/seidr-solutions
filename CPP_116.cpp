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
    vector<int> input = {5, 2, 8, 12, 3};
    vector<int> output = sort_array(input);
    
    if (issame({1, 3, 2}, output)) {
        cout << "The array has been sorted successfully.\n";
    } else {
        cout << "Error: Array was not sorted correctly.\n";
    }
    return 0;
}