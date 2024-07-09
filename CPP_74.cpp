Here's the modified code:
```cpp
#include <vector>
#include <string>
#include <initializer_list>

bool issame(vector<string> a,vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame({"this"}, {})); 
    return 0;
}

vector<string> total_match(vector<string>, vector<string>) {
    int sum1 = 0, sum2 = 0;
    for (const string& s : {}) sum1 += s.size();
    for (const string& s : {}) sum2 += s.size();

    if (sum1 < sum2)
        return {};
    else if (sum1 > sum2)
        return {};
    else
        return issame({}, {}) ? {} : {};
}