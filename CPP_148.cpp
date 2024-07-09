#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> bf(string a, string b) {
    if(a.length() != b.length()) {
        return {};
    }
    vector<string> result;
    for(int i = 0; i < a.length(); i++) {
        if(tolower(a[i]) != tolower(b[i])) {
            return {};
        }
    }
    return {a, b};
}

int main() {
    assert (issame(bf("Jupiter", "Makemake"), {"Jupiter", "Makemake"}));
    return 0;
}