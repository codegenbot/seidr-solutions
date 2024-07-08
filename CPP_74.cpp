#include <string>

bool issame(const vector<string>& lst1, const vector<string>& lst2) {
    int total_chars1 = 0, total_chars2 = 0;
    for (const string& s : lst1) {
        total_chars1 += s.size();
    }
    for (const string& s : lst2) {
        total_chars2 += s.size();
    }
    
    return (total_chars1 < total_chars2) ? true : false;
}