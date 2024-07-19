#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2);

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (countChars(lst1) < countChars(lst2)) {
        return lst1;
    }
    return lst2;
}