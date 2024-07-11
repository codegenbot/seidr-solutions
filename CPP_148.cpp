#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    assert(issame({"Jupiter", "Makemake"}, {}) == true);
    // Add more test cases as needed
    return 0;
}