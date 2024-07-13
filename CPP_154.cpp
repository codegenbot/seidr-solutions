#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for (int i = 0; i < a.length(); i++) {
        string temp = a.substr(i);
        int j = 0;
        while (j < temp.length()) {
            if (temp.substr(j).compare(b) == 0)
                return true;
            j++;
        }
    }
    return false;
}