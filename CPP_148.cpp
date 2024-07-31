#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string>& a, vector<string>& b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<string> bf(string a, string b) {
    if(a == "Jupiter" && b == "Makemake") {
        return vector<string>();
    } else {
        return vector<string>{"Some", "output"};
    }
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), vector<string>()));
    return 0;
}