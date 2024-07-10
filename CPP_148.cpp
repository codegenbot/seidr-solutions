#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

bool areSame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> bf(const string& s1, const string& s2) {
    vector<string> common_chars;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(common_chars));
    return common_chars;
}