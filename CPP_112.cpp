#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(std::reverse_delete("mamma", "mia"), {"", "True"}));
}