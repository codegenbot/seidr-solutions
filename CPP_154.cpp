#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for (int i = 0; i < a.length(); i++) {
        string temp = a.substr(i);
        if (temp.length() >= b.length()) {
            string c = temp;
            while (c.length() >= b.length()) {
                if (c.find(b) != string::npos)
                    return true;
                c = c.substr(1) + c[0];
            }
        }
    }
    return false;
}