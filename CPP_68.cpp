#include <iostream>
#include <vector>
#include <climits>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;

    if(arr.empty()) {
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }

    int minEvenValue = INT_MAX;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
        }
    }

    vector<int> pairIndex;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == minEvenValue) {
            pairIndex.push_back(i);
        }
    }

    result.push_back(minEvenValue);
    if(pairIndex.empty()) {
        result.push_back(-1);
    } else {
        result.push_back(*min_element(pairIndex.begin(), pairIndex.end()));
    }

    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , {}));
    return 0;
}