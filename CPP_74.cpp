#include <algorithm>

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    
    if (lst1.size() > 0 && lst2.size() > 0) {
        int len1 = 0, len2 = 0;
        
        for (const string& s : lst1) {
            len1 += s.length();
        }
        for (const string& s : lst2) {
            len2 += s.length();
        }
        
        if (len1 < len2) {
            result = lst1;
        } else if (len1 > len2) {
            result = lst2;
        } else {
            result = lst1.size() ? lst1 : lst2;
        }
    } else {
        result = lst1.size() ? lst1 : lst2;
    }
    
    return result;
}