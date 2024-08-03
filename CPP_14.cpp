#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (size_t i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    cout << "Test passed!" << endl;

    return 0;
}