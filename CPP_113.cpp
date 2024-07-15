#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {"the number of odd elements in the string 2 of the input.",
                                                      "the number of odd elements in the string 3 of the input.",
                                                      "the number of odd elements in the string 2 of the input."}));
    return 0;
}