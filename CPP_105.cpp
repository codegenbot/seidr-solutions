#include <vector>
#include <string>
using namespace std;

bool isSame(vector<string> v1, vector<string> v2) {
    if (v1.size() != v2.size()) 
        return false;
    for (int i = 0; i < v1.size(); i++) 
        if (v1[i] != v2[i]) 
            return false;
    return true;
}

bool by_length(const string& s1, const string& s2) {
    return s1.length() > s2.length();
}
assert(isSame(vector<string>{{"Nine", "Eight", "Four"}}, vector<string>{{"Nine"}, {"Eight"}, {"Four"}}));