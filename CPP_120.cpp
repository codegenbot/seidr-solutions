#include <vector>
#include <algorithm>

bool isSameVector(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

vector<int> getMaximum(vector<int> arr, int k) {
    if(k >= arr.size()) {
        vector<int> result(arr.begin(), arr.end());
        sort(result.begin(), result.end());
        return result;
    } else {
        vector<int> temp(arr.begin(), arr.begin() + k);
        sort(temp.begin(), temp.end());
        return temp;
    }
}

int main() {
    assert(isSameVector(getMaximum({1, 2, 3, -23, 243, -400, 0}, 0) , {}));
    // Your code here
}