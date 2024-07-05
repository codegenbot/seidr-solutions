#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto total_chars = [](const vector<string>& lst) {
        int total = 0;
        for (const string& s : lst) {
            total += s.size();
        }
        return total;
    };

    int total1 = total_chars(lst1);
    int total2 = total_chars(lst2);

    if (total1 < total2) {
        return lst1;
    } else {
        return lst2;
    }
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), vector<string>{}));
    assert(issame(total_match({"a", "bc"}, {"def"}), vector<string>{"a", "bc"}));
    assert(issame(total_match({"a", "b", "c"}, {"defg"}), vector<string>{"a", "b", "c"}));
    assert(issame(total_match({"short"}, {"longer", "than", "short"}), vector<string>{"short"}));
    assert(issame(total_match({}, {"nonempty"}), vector<string>{}));
    return 0;
}