#include <vector>
#include <string>

using namespace std;

bool same(vector<string> a, vector<string> b) {
    return a == b;
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
        result.push_back(a[i] + "");
    }
    return result;
}

int main() {
    assert(same(bf("Jupiter", "Makemake") , vector<string>{}));
    return 0;
}