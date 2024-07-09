#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) {
        return result;
    }
    
    int minEvenValue = INT_MAX, minIndex = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }
    
    result.push_back({minEvenValue, minIndex});
    
    return result;
}

int main() {
    vector<int> input = {4, 2, 3};
    vector<pair<int, int>> output = pluck(input);
    
    for (auto p : output) {
        cout << "The smallest even value is: " << p.first << ", and it's index is: " << p.second << endl;
    }
    
    return 0;
}