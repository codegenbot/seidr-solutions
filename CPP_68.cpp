#include <vector>

using namespace std;

void main() {
    vector<int> arr;
    cout << "Enter numbers (0 to finish): ";
    int n;
    while((cin >> n) && (n != 0)) {
        arr.push_back(n);
    }
    
    vector<pair<int, int>> result = pluck(arr);
    if(result.size() > 0) {
        cout << "First even number found at index: " << result[0].second << endl;
        cout << "Value of the first even number is: " << result[0].first << endl;
    } else {
        cout << "No even numbers found." << endl;
    }
}

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    int minEven = INT_MAX;
    int index = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }
    
    result.push_back({minEven, index});
    return result;
}