#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(const string& str) {
    vector<string> prefixes;
    for(int i = 0; i <= str.size(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(const vector<string>& a, const string& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b.substr(i, 1)) return false;
    return true;
}