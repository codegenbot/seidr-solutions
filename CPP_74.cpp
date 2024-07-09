#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (lst2.size() == 0) {
        return {};
    }
    return lst2;
}

int main() {
    assert(total_match({"this"}, {}) == vector<string>{});
    return 0;
}