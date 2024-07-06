#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = to_string(q[0]);
    for (int i = 1; i < q.size(); i++) {
        str += " " + to_string(q[i]);
    }
    vector<char> reversed(str.begin(),str.end());
    reverse(reversed.begin(),reversed.end());
    string revStr(reversed.begin(),reversed.end());
    
    if (str != revStr)
        return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}