#include <vector>
#include <string>
#include <algorithm>

bool is_palindrome(std::string s) {
    std::string t = s;
    std::reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    std::vector<int> q;
    int w;
    cin >> w;
    for (int i = 0; i < 3; ++i) {
        int x;
        cin >> x;
        q.push_back(x);
    }
    cout << ((will_it_fly(q, w)) ? "YES" : "NO") << endl;

}

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (!is_palindrome(str)) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}