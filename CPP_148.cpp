#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool areSame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> bf(const string& s1, const string& s2) {
    vector<string> common_chars;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    set_intersection(s1.cbegin(), s1.cend(), s2.cbegin(), s2.cend(), back_inserter(common_chars));
    return common_chars;
}