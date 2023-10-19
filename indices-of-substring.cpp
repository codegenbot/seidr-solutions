#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
#include <sstream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
/*
"ACUTAIMPoqxZsnmdwbgGikgyvVYLpVxPmPjalHINrJiCvHisJTECjaeelqXcrWXlNZGXkXLwhFJjHyADpONKQfBlvxVzlNxtEJtyWDSsnPDwJvRdTKdzDbdSRWcCZJLxLqCtOaYDWhRLxEYvVWuReFYDDMdjIpPcmMuDFmrEhSizdCSjIHrXpIUikjCvtbeQUOTZtLfkcTCduhwIvpyWjukwPXvduNDBaLSVjGxHwbLTLlhIWXJPIiUwCUEsHTUbrZngnVDBysSEEqojrNLIcBZFqgyPQMyWwKOExXKUmttZOLYdXbGzQqUyLQMPnipcJLJGiywUVEVneyFQpWJaxbvWSxOSjDJjwRJWjqRKLDWqTJbzcAGkgDfxAJlSuPIQWZpZDonzDnJoNoNtYtbCkqsSGcMvytdppglpmoFNLzRhMtpLVZjzjWEHznaxnPYuMFdsgJnO",
167
output:
6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 1 1 1 1 1 1 1 1 1 1 9 9 9 9 9 9 9 9 9 9 9 1 1 1 1
4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 68 68 68 68 68 68 68 68 68 68 68 68 68 68 68 68 68 7 7 7 6 6 6 6 6 6 6 6 6 6 6 6 4 4 4 4
*/
int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);
    if (text.length() < target.length()) {
        cout << -1 << endl;
        return 0;
    }
    vector<int> ans;
    for (int i = 0; i < text.length() - target.length() + 1; i++) {
        for (int j = 0; j < target.length(); j++) {
            if (text[i + j] != target[j]) {
                break;
            }
            if (j == target.length() - 1) {
                ans.push_back(i);
            }
        }
    }
    if (ans.size() == 0) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
