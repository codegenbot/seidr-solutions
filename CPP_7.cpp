#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> input, string substring) {
    vector<string> result;
    for (string s : input) {
        if (s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> testInput = {"grunt", "trumpet", "prune", "gruesome"};
    string filterSubstring = "run";
    vector<string> filteredResult = filter_by_substring(testInput, filterSubstring);
    assert(issame(filteredResult, {"grunt", "prune"}));
    return 0;
}