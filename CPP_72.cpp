#include <vector>
#include <string>
#include <algorithm>

bool main() {
    bool will_it_fly(vector<int> q, int w) {
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
    
    // call the function
    int main() {
        vector<int> q = {1, 2, 3};
        int w = 6;
        cout << will_it_fly(q, w) << endl;
    }