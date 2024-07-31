#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> result = lst;
    result.erase(remove_if(result.begin(), result.end(), [](const string& s) { return s.length() % 2 != 0; }), result.end());
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main() {
    vector<string> input = {"aaaa", "bbbb", "dd", "cc"};
    assert(issame(sorted_list_sum(input), {"cc", "dd", "aaaa", "bbbb"}));
    
    return 0;
}