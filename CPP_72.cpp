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
    vector<int> q1 = {4, 3, 5};
    int w1 = 10;
    cout << boolalpha << will_it_fly(q1, w1) << endl;
    
    vector<int> q2 = {7, 6, 5};
    int w2 = 12;
    cout << boolalpha << will_it_fly(q2, w2) << endl;

    return 0;
}