```cpp
#include <iostream>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

vector<string> sort_array(vector<int> arr) {
    vector<string> temp;
    for (int i : arr) {
        temp.push_back(to_string(i));
    }
    sort(temp.begin(), temp.end());
    return temp;
}

int main_test() {
    assert(issame(sort_array({1, 2, 4, 8, 16, 32}), {1, 2, 4, 8, 16, 32}));
    return 0;
}