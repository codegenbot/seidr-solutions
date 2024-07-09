#include <vector>
#include <string>

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> result = separate_paren_groups("((group1)(group2))");
    for (const string& group : result) {
        cout << group << endl;
    }
    
    return 0;
}