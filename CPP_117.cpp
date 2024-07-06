#include <string>
#include <vector>

bool issame(vector<std::string> a, vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < b[i]) { 
            return true;
        } else if (a[i] > b[i]) { 
            return false;
        }
    }
    return true;
}