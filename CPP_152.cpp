#include <vector>
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

bool issame(std::vector<int>& a, std::vector<int>& b);

vector<int> compare(const vector<int>& a, const vector<int>& b);

bool issame(std::vector<int>& a, std::vector<int>& b) {
    return a == b;
}

vector<int> compare(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    for(size_t i = 0; i < min(a.size(), b.size()); ++i) {
        result.push_back(abs(a[i] - b[i]));
    }
    return result;
}

int main() {
    assert(issame(compare({1,2,3,5},{-1,2,3,4}), {2,0,0,1}));
    
    return 0;
}