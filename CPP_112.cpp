#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<string> reverse_delete(const string& s, const string& c) {
    vector<string> result;
    string temp;
    
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            temp += s[i];
        }
    }
    
    string reversed = temp;
    reverse(reversed.begin(), reversed.end());
    
    if (temp == reversed) {
        result.push_back(temp);
        result.push_back("True");
    } else {
        result.push_back(temp);
        result.push_back("False");
    }
    
    return result;
}

int main() {
    assert(reverse_delete("mamma", "mia") == vector<string>{"", "True"});
    
    return 0;
}