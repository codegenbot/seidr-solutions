#include <vector>
using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> nodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            nodes.push_back({arr[i], i});
        }
    }
    
    if (nodes.empty()) {
        return {};
    }
    
    vector<int> result;
    int minEvenValue = nodes[0].first;
    int index = nodes[0].second;
    
    for (int i = 1; i < nodes.size(); i++) {
        if (nodes[i].first < minEvenValue) {
            minEvenValue = nodes[i].first;
            index = nodes[i].second;
        }
    }
    
    result.push_back(minEvenValue);
    result.push_back(index);
    
    return result;
}