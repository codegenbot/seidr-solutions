#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> select_words(string input, int k) {
    istringstream iss(input);
    vector<string> words; 
    int wordCount = 0;

    for (string s; getline(iss, s, ' ');) {
        if (++wordCount <= k) {
            words.push_back(s);
        } else break;
    }

    sort(words.begin(), words.end());

    return words;
}

string Join(const vector<string>& vec, char delimiter) {
    stringstream ss;
    for (const auto& s : vec) {
        ss << s << delimiter;
    }
    return ss.str();
}

int main() {
    vector<string> my_result = select_words("a b c d e f", 1);
    if (!issame(vector<string>(my_result.begin(), my_result.end()), select_words("a b c d e f", 1))) 
        cout << "{" + Join(my_result, ", ") + "}" << endl;
    return 0;
}