#include <iostream>
#include <string>

using namespace std;

void fizz_buzz(int n) {
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        if ((i % 3 == 0 && i % 5 != 0)) s = "fizz";
        else if (i % 5 == 0) s = "buzz";
        else if (i % 15 == 0) s = "fizzbuzz";
        cout << s << endl;
    }
}