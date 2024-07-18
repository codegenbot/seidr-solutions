#include <iostream>
#include <vector>
#include <cassert>

int totalChars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return totalChars(a) == totalChars(b);
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    }
    return lst2;
}

int main() {
    vector<string> list1 = {"apple", "banana", "cherry"};
    vector<string> list2 = {"orange", "grape"};

    vector<string> result = total_match(list1, list2);

    assert(result == list2);

    return 0;
}