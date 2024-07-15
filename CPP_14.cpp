#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b);

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    cout << "Test passed" << endl;
    return 0;
}