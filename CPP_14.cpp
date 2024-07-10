using namespace std;

#include <initializer_list>
#include <vector>
#include <string>
#include <iostream>

bool issame(vector<string> a, vector<string> secondVector) {
    if (a.size() != secondVector.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != secondVector[i]) return false;
    }
    return true;
}

vector<string> all_prefixes(const string& s) {
    vector<string> result;
    for (int i = 0; i <= s.size(); i++) {
        result.push_back(s.substr(0, i));
    }
    return result;
}