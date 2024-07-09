#include <vector>
#include <string>

using namespace std;

bool issame(const vector<string>& a) { 
    if (a.size() == 0) return true;
    for (int i = 1; i < a.size(); i++) {
        if (!issame({a[i-1]})) return false;
    }
    return true;
}

const vector<string> all_prefixes(const string& str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(issame(all_prefixes("WWW")));
    return 0;
}