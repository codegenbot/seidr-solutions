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
    cout << "Enter the number of queries: ";
    cin >> q.size();
    for (int i = 0; i < q.size(); i++) {
        cout << "Enter query " << i + 1 << ": ";
        cin >> q[i];
    }
    
    cout << "Enter the weight w: ";
    cin >> w;
    
    if(will_it_fly(q, w)) 
        cout << "Yes, it will fly." << endl;
    else
        cout << "No, it won't fly." << endl;
}