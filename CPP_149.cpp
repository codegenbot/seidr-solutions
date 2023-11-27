#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> sorted_list_sum(vector<string> lst);

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}

vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for (string word : lst) {
        if (word.length() % 2 == 0) {
            result.push_back(word);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}