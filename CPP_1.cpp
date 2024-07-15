#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(const string& s) {
    vector<string> result;
    int count = 0;
    string current_group;
    
    for (char c : s) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count >= 0) {
                current_group += c;
            }
            if (count == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}