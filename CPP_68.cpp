#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    pair<int, int> smallest = make_pair(INT_MAX, 0);
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest.first) {
            smallest = make_pair(arr[i], i);
        }
    }
    
    if (smallest.first != INT_MAX)
        result = {make_pair(smallest.first, smallest.second)};
    
    return result;
}

int main() {
    vector<int> input;
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for(int i=0; i<n; ++i){
        int num;
        cout << "Enter node value: ";
        cin >> num;
        input.push_back(num);
    }
    vector<pair<int, int>> result = pluck(input);
    if (result.size() == 1) {
        cout << "Plucked node: {" << result[0].first << ", " << result[0].second << "}\n";
    } else {
        cout << "No nodes were plucked.\n";
    }
    return 0;
}