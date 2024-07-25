#include <string>
using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 0; i <= str.length(); i++) {
        string prefix = str.substr(0, i);
        prefixes.push_back(prefix);
    }
    return prefixes;
}