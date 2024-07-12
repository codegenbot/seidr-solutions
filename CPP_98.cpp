#include <iostream>
#include <string>

using namespace std;

int count_upper(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0 && isupper(s[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    cout << count_upper("EEEE") << endl;
    return 0;
}