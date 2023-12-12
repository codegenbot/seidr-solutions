#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return (a.length() == b.length());
}

int main() {
    assert (issame(total_match({"this"}, {}) , {}));
    return 0;
}
```