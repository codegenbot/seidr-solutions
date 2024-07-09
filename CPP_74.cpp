#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    for (const auto& s : a) {
        bool found = false;
        for (const auto& t : b) {
            if (s == t) {
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}

int main() {
    vector<string> lst1 = {"this"};
    vector<string> lst2;
    assert(issame(total_match(lst1, lst2), lst2));
}