#include <vector>
#include <string>

using namespace std;

std::vector<std::string> all_prefixes(const string& str) {
    vector<string> prefixes;
    for (int i = 0; i <= str.size(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(vector<string> a) {
    return a == vector<string>({"W", "WW", "WWW"});
}

int main() {
    assert(issame(all_prefixes("WWW")));
    //return 0; // duplicate definition
}