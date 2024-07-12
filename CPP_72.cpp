#include <vector>
#include <string>

bool will_it_fly(vector<vector<int>>& q, int w) {
    string str = "";
    for(int i : q[0]) {
        str += to_string(i);
    }
    if(str != to_string(reverse(stoi(str)).s))
        return false;
    int sum = 0;
    for(int i : q[0]) {
        sum += i;
    }
    return sum <= w;
}