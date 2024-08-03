
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

string longest(vector<string> strings) {
    return *max_element(strings.begin(), strings.end(), [](const string& a, const string& b) { return a.length() != b.length() ? a.length() < b.length() : a < b; });
}