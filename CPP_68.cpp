#include <iostream>
#include <vector>

using namespace std;

bool issame(int x) {
    if(x%2 == 0)
        return true;
    else
        return false;
}

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (issame(arr[i]) && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        result.push_back({minEven, minIndex});
    } else {
        result.push_back({0, -1}); 
    }

    return result;
}

int main() {
    
}