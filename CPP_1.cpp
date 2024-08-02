#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    int count = 0;
    string current = "";
    for(char c : paren_string){
        if(c == '('){
            count++;
        }
        else if(c == ')'){
            count--;
        }
        current += c;
        if(count == 0){
            groups.push_back(current);
            current = "";
        }
    }
    return groups;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}