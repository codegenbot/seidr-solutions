```cpp
#include <vector>
#include <algorithm>
#include <iostream>

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    int input;
    cout << "Enter the number of elements to be extracted: ";
    cin >> input;
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, input) , {3,243,0,-23,-400}));
}