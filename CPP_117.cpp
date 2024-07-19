#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    size_t start = 0, end;
    for (int i = 0; i < n; ++i) {
        start = s.find_first_not_of(' ', start);
        end = s.find_first_of(' ', start);
        if (end == string::npos) 
            break;
        start = end + 1;
    }
    if (start != string::npos) {
        while (start < s.size()) {
            end = s.find_first_of(' ', start);
            if (end == string::npos) 
                end = s.size();
            words.push_back(s.substr(start, end - start));
            start = s.find_first_not_of(' ', end);
        }
    }
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}