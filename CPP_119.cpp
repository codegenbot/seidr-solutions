#include <vector>
#include <string>

using namespace std;

string match_parens(vector<string> lst) {
    int cnt1 = 0, cnt2 = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') cnt1++;
            else cnt2++;
        }
    }
    return (cnt1 % 2 == 0 && cnt2 % 2 == 0) ? "Yes" : "No";
}