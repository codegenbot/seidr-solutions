#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 1; i <= str.length(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    sort(prefixes.begin(), prefixes.end()); 
    return prefixes;
}