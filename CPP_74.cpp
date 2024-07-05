#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto char_count = [](const vector<string>& lst) {
        size_t count = 0;
        for (const auto& str : lst) {
            count += str.size();
        }
        return count;
    };

    if (char_count(lst1) <= char_count(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert (issame(total_match({"this"}, {}), {}));
    assert (issame(total_match({"this"}, {"is"}), {"is"}));
    assert (issame(total_match({"ab", "cd"}, {"efg"}), {"efg"}));
    assert (issame(total_match({}, {}), {}));
    return 0;
}