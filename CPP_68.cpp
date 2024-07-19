#include <vector>

using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    for(int i = 0; i < v1.size() && i < v2.size(); i++) {
        if(v1[i] != v2[i])
            return false;
    }
    return true;
}

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    for(int i = 0; i < arr.size(); i++) {
        bool found = false;
        for(int j = 0; j < arr.size(); j++) {
            if(i != j && issame({arr[i], arr[j]}, {arr[j], arr[i]})) {
                found = true;
                break;
            }
        }
        if(found) {
            result.push_back({arr[i], i});
            break;
        }
    }

    if(result.empty()) {
        result.push_back({0, -1});
    }

    return result;
}