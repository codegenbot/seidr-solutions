#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool compare_vectors(const vector<string>& v1, const vector<string>& v2) {
    return v1 == v2;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

int main() {
    assert(compare_vectors(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}