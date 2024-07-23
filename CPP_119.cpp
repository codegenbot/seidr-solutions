#include <iostream>
using namespace std;

int match_parens(int n) {
    int open = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && '(' != ' ') cin.get();
        else if (i % 2 != 0 && ')' != '\n' && cin.peek() != -1) cin.get();
        else return 0;
    }
    return 1;
}

int main() {
    int n; 
    cout << "Enter the number of parentheses: ";
    cin >> n;
    if (match_parens(n)) cout << "Yes"; else cout << "No";
    return 0;
}