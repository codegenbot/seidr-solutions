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

    if(arr.empty()) return result;

    int minEvenValue = INT_MAX;
    int minIndex = -1;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 != 0 || (arr[i] == minEvenValue && i != minIndex)) {
            result.push_back(arr[i]);
        }
    }

    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , {}));
    return 0;
}