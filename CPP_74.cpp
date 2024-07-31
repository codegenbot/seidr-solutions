#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    return total_chars(a) == total_chars(b);
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
    } else {
        return lst2;
    }
}