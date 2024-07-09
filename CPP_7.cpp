#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        throw runtime_error("Vectors are not the same size");
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (string s : strings) {
        if (s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
}