#include <vector>
#include <string>

using namespace std;

bool same(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(string s : a) {
        if(find(b.begin(), b.end(), s) == b.end())
            return false;
    }
    return true;
}

int main() {
    assert(same(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}