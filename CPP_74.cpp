#include <string>
#include <vector>

vector<string> compare_lists(const vector<string>& lst1, const vector<string>& lst2) {
    int total_chars1 = 0;
    int total_chars2 = 0;
    
    for (const string& str : lst1) {
        total_chars1 += str.size();
    }
    
    for (const string& str : lst2) {
        total_chars2 += str.size();
    }
    
    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return lst2;
    }
}

bool issame(const vector<string>& a, const vector<string>& b) {
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