#include <string>
#include <vector>
#include <cassert>

bool issame(const vector<string>& lst1, const vector<string>& lst2) {
    int total_length1 = 0;
    for (const auto& str : lst1) {
        total_length1 += str.length();
    }
    
    int total_length2 = 0;
    for (const auto& str : lst2) {
        total_length2 += str.length();
    }
    
    if (total_length1 < total_length2) {
        return true;
    } else {
        return false;
    }
}