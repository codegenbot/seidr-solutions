#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

#include <algorithm>

bool areSame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> bf(const string& s1, const string& s2) {
    vector<string> common_chars;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(common_chars));
    return common_chars;
}