#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2);

int main() {
    vector<string> list1 = {"apple", "banana", "cherry"};
    vector<string> list2 = {"orange", "pear"};

    vector<string> result = total_match(list1, list2);

    assert(issame(result, list2));
    
    return 0;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars1 = 0, total_chars2 = 0;

    for (const string& str : lst1) {
        total_chars1 += str.length();
    }

    for (const string& str : lst2) {
        total_chars2 += str.length();
    }

    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return lst2;
    }
}