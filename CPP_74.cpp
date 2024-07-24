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
    return count_chars(a) == count_chars(b);
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (count_chars(lst1) < count_chars(lst2)) {
        return lst1;
    }
    return lst2;
}