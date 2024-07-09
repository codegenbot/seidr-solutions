```
#include <vector>
#include <string>
#include <algorithm>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    bool balanced = (str == reverse(str).substr(0, str.length()));
    return balanced && accumulate(q.begin(), q.end(), 0) <= w;
}