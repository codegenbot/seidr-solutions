#include <string>

vector<string> function_name(const vector<string>& lst1, const vector<string>& lst2) {
    int totalChars1 = 0, totalChars2 = 0;
    for (const string& str : lst1) {
        totalChars1 += str.size();
    }
    for (const string& str : lst2) {
        totalChars2 += str.size();
    }
    
    int total_match = issame(lst1, lst2);
    
    if (totalChars1 < totalChars2 && total_match > 0) {
        return lst1;
    } else {
        return lst2;
    }
}