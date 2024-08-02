#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    return is_palindrome(str) && accumulate(q.begin(), q.end(), 0) <= w;
}

bool is_palindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    cout << "Program execution successful." << endl;
    return 0;
}