#include <vector>

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test the maximum function
    vector<int> arr = {5, 3, 8, 2, 1, 9};
    int k = 3;
    vector<int> result = maximum(arr, k);
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    // Test the issame function
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    bool same = issame(a, b);
    if(same) {
        cout << "The vectors are the same" << endl;
    } else {
        cout << "The vectors are different" << endl;
    }

    return 0;
}