#include <string>
using namespace std;

bool is_one(string s) {
    return s.length() == 1 && s[0] == '1';
}

bool is_happy(string s) {
    string t = s;
    while(t != "1" && !is_one(t)) {
        int total = 0, carry = 0;
        for(int i = t.length()-1; i >= 0; --i) { 
            int digit = (t[i]-'0') + carry;
            carry = digit / 10;
            digit %= 10;
            total = 10*total + digit;
        }
        t = to_string(total);
    }
    return t == "1";
}