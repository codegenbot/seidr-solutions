#include <vector>

vector<int> maximum(vector<int> arr, int k);
bool issame(vector<int> a, vector<int> b);
  
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

int main() {
    // Testing the maximum function
    vector<int> arr = {5, 9, 3, 1, 7};
    int k = 3;
    vector<int> result = maximum(arr, k);

    // Printing the output
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    // Testing the issame function
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 3, 2};
    bool isSame = issame(a, b);

    // Printing the output
    cout << isSame << endl;

    return 0;
}