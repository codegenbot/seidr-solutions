#include <vector>
using namespace std;

vector<int> maximum(vector<int> arr, int k);

bool issame(vector<int> a, vector<int> b);

int main() {
    // Your code here
    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // Your code here
    return false;
}