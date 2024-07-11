#include <string>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size();
}

int main() {
    assert(issame({"Jupiter", "Makemake"}, {}));
}