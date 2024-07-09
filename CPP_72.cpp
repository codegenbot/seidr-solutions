```cpp
#include <vector>
#include <string>
#include <algorithm>

bool is_palindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    vector<int> q;
    int w;
    cin >> w;
    for (int i = 0; i < 3; ++i) {
        int x;
        cin >> x;
        q.push_back(x);
    }
    cout << ((will_it_fly(q, w)) ? "YES" : "NO") << endl;

}

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (!is_palindrome(str)) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}