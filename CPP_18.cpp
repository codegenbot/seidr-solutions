#include <iostream>
#include <string>

using namespace std;

int howManyTimes(string str, string substr) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, substr.length()) == substr) {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "aaaa";
    string substr = "aa";
    cout << howManyTimes(str, substr) << endl;
    assert (howManyTimes("john doe", "john") == 1);
    return 0;
}