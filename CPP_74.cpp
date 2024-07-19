#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return (a == b);
}

int totalChars(const vector<string>& lst) {
    int total = 0;
    for(const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2);

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars_lst1 = totalChars(lst1);
    int total_chars_lst2 = totalChars(lst2);

    if(total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));

    return 0;
}