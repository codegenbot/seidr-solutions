#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool assert_vectors_equal(const vector<string>& v1, const vector<string>& v2){
    return v1 == v2;
}

vector<string> sorted_list_sum(vector<string> lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main() {
    assert(assert_vectors_equal(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));

    // Add more test cases here
    assert(assert_vectors_equal(sorted_list_sum({"hello", "world", "abc"}), {"abc", "world", "hello"}));
    assert(assert_vectors_equal(sorted_list_sum({"programming", "is", "fun"}), {"is", "fun", "programming"}));

    return 0;
}