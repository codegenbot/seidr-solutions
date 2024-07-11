#include <string>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(vector<string>{"Jupiter", "Makemake"}, vector<string>{}));
    // add more test cases if needed
    return 0;
}