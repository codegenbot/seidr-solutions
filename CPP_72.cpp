#include <vector>
#include <string>
#include <algorithm>

bool is_palindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (!is_palindrome(str)) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    vector<int> q = {1,2,3};
    int w = 10;
    if(will_it_fly(q,w)) {
        cout << "The quad will fly." << endl;
    } else {
        cout << "The quad won't fly." << endl;
    }
    return 0;
}