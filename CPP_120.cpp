#include <vector>

using namespace std;

vector<int> maximum(vector<int> arr, int k);

bool issame(vector<int> a, vector<int> b);

int main() {
    // Test cases
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;
    
    vector<int> result = maximum(arr, k);
    
    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}