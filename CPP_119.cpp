#include <iostream>
#include <string>
using namespace std;

string matchParens(vector<string> lst) {
    int countOpen = 0, countClose = 0;

    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                countOpen++;
            } else if (c == ')') {
                if (countOpen == 0) return "No";
                countOpen--;
            }
        }
    }

    if (countOpen > 0) return "No";

    return "Yes";
}

int main() {
    vector<string> lst = {")", "("};
    cout << matchParens(lst);
    return 0;
}