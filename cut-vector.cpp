#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    stack<int> st;
    for(int i = 0; i < n; i++) {
        if(s[i] == '(') st.push(i);
        else {
            if(!st.empty()) {
                if(i - st.top() == 1) st.pop();
                else st.push(i);
            }
            else st.push(i);
        }
    }
    if(st.empty()) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
