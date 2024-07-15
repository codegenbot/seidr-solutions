#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(vector<string>{"this"}, vector<string>{}) == true);
    assert(issame(vector<string>{"hello", "world"}, vector<string>{"hello", "world"}) == true);
    assert(issame(vector<string>{"apple", "orange"}, vector<string>{"banana", "grape"}) == false);

    return 0;
}