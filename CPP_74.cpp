#include <vector>

bool issame(vector<string> a, vector<string> b) {
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

int countChars(const vector<string>& lst) {
    int count = 0;
    for (const string& str : lst) {
        count += str.size();
    }
    return count;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (countChars(lst1) < countChars(lst2)) {
        return lst1;
    }
    return lst2;
}