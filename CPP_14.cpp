#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> result;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

vector<string> expected = {"W", "WW", "WWW"};
vector<string> result = all_prefixes("WWW");
assert(result == expected);
return 0;