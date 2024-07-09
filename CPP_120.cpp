#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() == b.size())
        return true;
    else
        return false;
}

vector<int> maximum(vector<int> arr) {
    vector<int> result(arr.begin(), arr.begin()+3);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}) , {0,-23,-400}));
    return 0;
}