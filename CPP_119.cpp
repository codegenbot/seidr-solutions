#include <iostream>
using namespace std;

int match_parens(int n) {
    int open = 0;
    for (int i = 1; i <= n; i++) {
        if (i == '(') open++;
        else if (i == ')') open--;
        if (open < 0) return 0;
    }
    return open == 0 ? 1 : 0;
}

int main() {
    if (match_parens(2) == 0) cout << "No"; else cout << "Yes";
    return 0;
}