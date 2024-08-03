```c++
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

    vector<int> q;
    int w;
    cin >> w;
    for(int i=0; i<5;i++){
        int a;
        cin>>a;
        q.push_back(a);
    }
    
    cout << will_it_fly(q, w) << endl;
}