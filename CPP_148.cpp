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
    string sorted_s1 = s1;
    string sorted_s2 = s2;
    sort(sorted_s1.begin(), sorted_s1.end());
    sort(sorted_s2.begin(), sorted_s2.end());
    
    std::set_intersection(sorted_s1.begin(), sorted_s1.end(), sorted_s2.begin(), sorted_s2.end(), back_inserter(common_chars));
    
    return common_chars;
}