```c++
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return sort(a.begin(), a.end()) == sort(b.begin(), b.end());
}

int main() {
    // Your code here
}