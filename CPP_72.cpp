#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    vector<char> rev;
    for (char c : str) {
        rev.push_back(c);
    }
    reverse(rev.begin(), rev.end());
    string rev_str(rev.begin(), rev.end());
    if (str != rev_str)
        return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}