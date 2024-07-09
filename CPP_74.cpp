#include <vector>
#include <string>
#include <cassert>

using namespace std;

int totalChars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    }
    return lst2;
}

int main() {
    assert(total_match({"this"}, {}) == vector<string>{});
    return 0;
}