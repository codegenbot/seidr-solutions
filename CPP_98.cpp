#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int count_upper(string s);

int main() {
    assert(count_upper("EEEE") == 4);
}

int count_upper(string s){
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i]) && (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
            count++;
        }
    }
    return count;
}