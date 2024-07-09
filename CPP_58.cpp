#include <set>

vector<int> common(vector<int> l1,vector<int> l2){
    vector<int> result;
    set s1(l1.begin(),l1.end());
    set s2(l2.begin(),l2.end());

    for(auto it = s1.begin(); it != s1.end(); ++it) {
        if (s2.find(*it) != s2.end()) {
            result.push_back(*it);
        }
    }

    sort(result.begin(),result.end());
    return result;
}