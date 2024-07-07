#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 5) , {243}));
    cout << "Maximum elements: ";
    for (int i : maximum({1, 2, 3, -23, 243, -400, 0}, 5)) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}