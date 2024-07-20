Here is the completed code:

```cpp
#include <set>

vector<int> common(vector<int> l1,vector<int> l2){
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> result;
    for(int i : s1) {
        if(s2.find(i) != s2.end()) {
            result.push_back(i);
        }
    }

    sort(result.begin(), result.end());
    return result;
}