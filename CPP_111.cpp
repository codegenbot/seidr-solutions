#include <map>
#include <cassert>

using namespace std;

bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a == b;
}

int main() {
    assert(issame(map<char, int>{{'a', 1}}, {{'a', 1}}));
    return 0;
}