#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b){
    // Function logic implementation
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    int totalChars1 = 0, totalChars2 = 0;
    for (const string& s : lst1) {
        totalChars1 += s.size();
    }
    for (const string& s : lst2) {
        totalChars2 += s.size();
    }
    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }
}