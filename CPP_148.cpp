#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

bool issame(const vector<string>& a,const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(vector<string>{"Jupiter", "Makemake"}, vector<string>{}));
    return 0;
}