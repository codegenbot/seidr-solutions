```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    int total_chars1 = 0, total_chars2 = 0;

    for (const auto& str : lst1) {
        total_chars1 += str.length();
    }
    for (const auto& str : lst2) {
        total_chars2 += str.length();
    }

    if (total_chars1 < total_chars2) {
        return lst1;
    } else if (total_chars1 > total_chars2) {
        return lst2;
    } else {
        return lst1;
    }
}

int main() {
    vector<string> result = total_match({"this"}, {});
    assert(issame(result, {}));
}