```
#include <iostream>
#include <vector>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return (a.length() == b.length());
}

int main() {
    assert(issame({"this"}, {}) == {});
    return 0;
}
```