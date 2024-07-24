#include <vector>
#include <string>

int count_chars(const vector<string>& lst) {
    int count = 0;
    for (const string& str : lst) {
        count += str.size();
    }
    return count;
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

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (count_chars(lst1) < count_chars(lst2)) {
        return lst1;
    }
    return lst2;
}