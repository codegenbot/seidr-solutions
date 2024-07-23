#include <string>
using namespace std;

bool is_one(string s) {
    return s.length() == 1 && s[0] == '1';
}

bool is_happy(string s) {
    string t = s;
    while(t != "1" && !is_one(t)) {
        int total = 0;
        bool changed = false; // flag to track if the value of t changes
        for(char c : t) 
            total += (c-'0')*(c-'0');
        if(total == 4) { 
            return false;
        }
        if(t != std::to_string(total)) {
            changed = true;
        }
        t = to_string(total);
    }
    return t == "1";
}