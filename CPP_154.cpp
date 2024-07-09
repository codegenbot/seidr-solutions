#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for (int i = 0; i < a.size(); i++) {
        string temp = a.substr(i);
        int j = 0;
        while (j < temp.size()) {
            if (temp.size() - j <= b.size()) {
                if (temp.find(b) != string::npos) {
                    return true;
                }
            } else {
                temp = temp.substr(j) + temp.substr(0, j);
                if (temp.find(b) != string::npos) {
                    return true;
                }
            }
            j++;
        }
    }
    return false;
}