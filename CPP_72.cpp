#include <iostream>
#include <vector>
using namespace std;

bool will_it_fly(vector<vector<int>> q, int w) {
    if(w >= (q[0][1] - q[0][0]) && w >= (q[1][1] - q[1][0])) {
        return true;
    } else {
        return false;
    }
}

bool will_it_fly(vector<vector<int>> q, int w) {
    if(w >= (q[0][1] - q[0][0]) && w >= (q[1][1] - q[1][0])) {
        return true;
    } else {
        return false;
    }
}