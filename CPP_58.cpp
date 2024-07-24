#include <set>

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    
    s1.insert(s1.begin(), s2.begin(), s2.end());
    s1.erase(remove_if(s1.begin(), s1.end(), [ &s2 ](int x) { return !s2.count(x); }), s1.end());

    vector<int> result;
    for (auto i : s1)
        result.push_back(i);

    sort(result.begin(), result.end());
    
    return result;
}