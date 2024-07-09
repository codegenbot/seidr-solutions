```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            result.push_back(i == 1 ? "One"
                                    : i == 2 ? "Two"
                                    : i == 3 ? "Three"
                                    : i == 4 ? "Four"
                                    : i == 5 ? "Five"
                                    : i == 6 ? "Six"
                                    : i == 7 ? "Seven"
                                    : i == 8 ? "Eight"
                                    : "Nine");
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
}