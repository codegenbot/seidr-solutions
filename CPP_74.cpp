#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto char_count = [](const vector<string>& lst) {
        int count = 0;
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

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    assert(issame(total_match({"this"}, {"other", "test"}), {"this"}));
    assert(issame(total_match({"this"}, {"more", "words"}), {"this"}));
    assert(issame(total_match({"fewer"}, {"this", "list"}), {"fewer"}));
    cout << "All tests passed!" << endl;
    return 0;
}