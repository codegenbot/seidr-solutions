#include <vector>
#include <string>
#include <algorithm>

bool main() {
    vector<int> q;
    int w;
    
    cin >> w;
    for (int i = 0; i < 3; i++) {
        int num;
        cin >> num;
        q.push_back(num);
    }
    
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    
    if (!isPalindrome(str)) return false;
    
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    
    return sum <= w;
}

bool isPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}