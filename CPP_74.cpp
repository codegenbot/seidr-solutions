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

    int count1 = char_count(lst1);
    int count2 = char_count(lst2);

    if (count1 <= count2) {
        return lst1;
    } else {
        return lst2;
    }
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}