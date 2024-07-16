```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> leadersResult = leaders({1, 3, 4, 1, 5});
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    int leader = arr[n - 1];
    result.push_back(leader);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= leader) {
            leader = arr[i];
            result.push_back(leader);
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}