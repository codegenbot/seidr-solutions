#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int n) {
    vector<int> result;
    for(int i = 0; i < n; i++){
        auto it = max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    vector<int> result = maximum({1, 2, 3, -23, 243, -400, 0}, 7);
    for(int x : result) {
        cout << x << " ";
    }
    return 0;
}