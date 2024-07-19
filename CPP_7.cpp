#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& vec1, const vector<string>& vec2);

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}