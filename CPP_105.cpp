```cpp
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    // your code here
    return 0;
}