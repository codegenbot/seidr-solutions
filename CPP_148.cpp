#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> find_planets_in_between(const vector<string>& planets, const string& planet1, const string& planet2) {
    vector<string> result;
    int idx1 = -1, idx2 = -1;
    
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            idx1 = i;
        }
        if (planets[i] == planet2) {
            idx2 = i;
        }
    }
    
    if (idx1 == -1 || idx2 == -1) {
        return result;
    }
    
    int start = min(idx1, idx2) + 1;
    int end = max(idx1, idx2);
    
    for (int i = start; i < end; ++i) {
        result.push_back(planets[i]);
    }
    
    return result;
}

int main() {
    assert(issame(make_pair("Jupiter", "Makemake"), make_pair("", "")));
    return 0;
}