```
#include <vector>
#include <string>
#include <cassert>
#include <ostream>

using namespace std;

bool checkVectors(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        cout << "Error: Vectors are not the same size." << endl;
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            cout << "Error: Strings at index " << i << " do not match." << endl;
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

assert (checkVectors(bf("Jupiter", "Makemake"), {"Jupiter", "Makemake"}));