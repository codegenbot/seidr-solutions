#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame_vectors(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> total_match(const vector<string>& a, const vector<string>& b) {
    return a;
}

// int main() {
//     assert(issame_vectors(vector<string>{"this"}, {}) == false);
//     assert(issame_vectors(total_match({"this"}, {}), {}));
    
//     return 0;
// }