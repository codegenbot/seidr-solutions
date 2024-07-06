#include <vector>

using namespace std;

void pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) {
        cout << "Array is empty." << endl;
        return;
    }
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            result.push_back({arr[i], i});
        }
    }
    
    cout << "Plucked even numbers: ";
    for (auto pair : result) {
        cout << pair.first << " at index " << pair.second << endl;
    }
}