```
#include <vector>
#include <string>
#include <algorithm>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    bool balanced = (str == string(str.rbegin(), str.rend()));
    return balanced && accumulate(q.begin(), q.end(), 0) <= w;
}