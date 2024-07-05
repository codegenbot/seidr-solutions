#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    vector<string> expected = {"grunt", "prune"};
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), expected));
    return 0;
}