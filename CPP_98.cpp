#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int count_upper(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 4);
    assert(count_upper("eEeE") == 2);
    assert(count_upper("abcd") == 0);
    cout << "All test cases passed!\n";
    return 0;
}