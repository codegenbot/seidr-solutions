#include <vector>
#include <string>

int total_chars(const vector<string>& lst);

bool issame(const vector<string>& a, const vector<string>& b);

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.length();
    }
    return total;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return total_chars(a) == total_chars(b);
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (total_chars(lst1) == total_chars(lst2)) {
        return lst1;
    }
    return lst2;
}