#include <vector>
#include <string>
#include <cassert>

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

bool total_match(const vector<string>& lst1, const vector<string>& lst2);

int main() {
    vector<string> lst1 = {"apple", "banana", "cherry"};
    vector<string> lst2 = {"pear", "orange"};
    total_match(lst1, lst2);
    return 0;
}

bool total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return true;
    } else {
        return total_chars(lst1) == total_chars(lst2) ? true : false;
    }
}