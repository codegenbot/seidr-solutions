#include <string>

bool issame(vector<string> a, vector<string> b) {
    int total_match = 0;
    
    for (const string& str : a) {
        total_match += str.size();
    }
    
    for (const string& str : b) {
        total_match += str.size();
    }
    
    if (a.size() < b.size()) {
        return false;
    } else {
        return (a.size() == b.size()) ? true : false;
    }
}