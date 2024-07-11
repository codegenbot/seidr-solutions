#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != rev(str)) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

string rev(string s) {
    string res = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        res += s[i];
    }
    return res;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    // your other code
    return 0;
}