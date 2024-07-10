#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(const vector<string>& strings, const string& substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

void solve() {
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == vector<string>{"grunt", "prune"});
}

int main() {
    solve();
    return 0;
}