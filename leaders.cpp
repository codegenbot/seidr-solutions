#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    
    for(int i = arr.size() - 1; i >= 0; --i) {
        if(arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    
    return result;
}

int main() {
    vector<int> input = {931, 891, 214, 39};
    vector<int> result = leaders(input);
    for (int x : result) cout << x << " ";
    return 0;
}