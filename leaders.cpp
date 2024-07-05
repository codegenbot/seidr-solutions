#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int leader = -1;

    for(int i = arr.size() - 1; i >= 0; --i) {
        if(arr[i] >= leader) {
            leader = arr[i];
            result.push_back(leader);
        }
    }

    std::reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    vector<int> input = {931, 891, 214, 39};
    vector<int> result = leaders(input);
    for (int x : result) cout << x << " ";
    return 0;
}