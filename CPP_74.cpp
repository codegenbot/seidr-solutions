#include <string>

bool issame(const vector<string>& lst1, const vector<string>& lst2) {
    int total_chars_lst1 = 0;
    int total_chars_lst2 = 0;
    
    for (const string& str : lst1) {
        total_chars_lst1 += str.size();
    }
    
    for (const string& str : lst2) {
        total_chars_lst2 += str.size();
    }
    
    if (total_chars_lst1 < total_chars_lst2) {
        return true;
    }
    
    return false;
}