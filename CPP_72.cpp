#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool is_palindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int accumulate(vector<int>::iterator begin, vector<int>::iterator end, int init) {
    int sum = init;
    for (; begin != end; ++begin)
        sum += *begin;
    return sum;
}

bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    return is_palindrome(s) && accumulate(q.begin(), q.end(), 0) <= w;
}

int main() {
    int n, w;
    cin >> n >> w;
    
    vector<int> q(n);
    
    for(int i = 0; i < n; i++) {
        cin >> q[i];
    }
    
    cout << (will_it_fly(q, w) ? "Yes" : "No") << endl;
    
    return 0;
}