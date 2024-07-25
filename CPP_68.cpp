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

    int evenValue = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && (evenValue == -1 || arr[i] < evenValue)) {
            evenValue = arr[i];
        }
    }

    result.push_back(evenValue);
    result.push_back(-1);

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] == evenValue) {
            result.push_back(i);
            break;
        }
    }

    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , {}));
    return 0;
}