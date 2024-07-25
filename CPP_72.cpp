```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool is_palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
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
    std::vector<int> q = {5};
    int w = 5;
    assert(will_it_fly(q, w) == true);
    return 0;
}