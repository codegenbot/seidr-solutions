#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> result;
    // Implement the logic to separate parenthesis groups here
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    
    return 0;
}