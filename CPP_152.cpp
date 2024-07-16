#include <vector>
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

vector<int> compare(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    for(size_t i = 0; i < a.size(); ++i) {
        result.push_back(abs(a[i] - b[i]));
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> result = compare({1, 2, 3, 5}, {-1, 2, 3, 4});
    for(int num : result) {
        cout << num << " ";
    }
    
    return 0;
}