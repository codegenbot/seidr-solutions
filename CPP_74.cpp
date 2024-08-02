#include <vector>
#include <string>

using namespace std;

bool operator!=(const vector<string>& a, const vector<string>& b) {
    return (a.size() != b.size()) || (!equal(a.begin(), a.end(), b.begin()));
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (&lst1 == &lst2)
        return {};
    int count1 = 0;
    for (const string& s : lst1) {
        count1 += s.size();
    }
    int count2 = 0;
    for (const string& s : lst2) {
        count2 += s.size();
    }

    if (count1 < count2)
        return lst1;
    else if (count1 > count2)
        return lst2;
    else
        return lst1;
}