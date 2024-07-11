#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst) {
    int balance = 0;
    for (const string& str : lst) {
        for (char c : str) {
            if (c == '(') {
                balance++;
            } else {
                if (balance == 0) {
                    return "No";
                }
                balance--;
            }
        }
    }
    if (balance == 0) {
        return "Yes";
    } else {
        return "No";
    }
}