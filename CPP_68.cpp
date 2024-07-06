#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if(arr.empty()) return {{}};
    
    int minEven = INT_MAX, minIndex = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }
    
    if(minEven != INT_MAX) result.push_back({minEven, minIndex});
    
    return result;
}

int main() {
    vector<int> arr = {7, 9, 7, 1};
    vector<pair<int, int>> output = pluck(arr);
    for(auto& p : output) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    
    return 0;
}