#include <vector>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size();
}

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    }
    return lst2;
}