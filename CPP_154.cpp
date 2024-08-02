#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.size(); i++) {
        string temp = b;
        while(temp.size() <= a.size() - i) {
            if(a.substr(i).find(temp) != string::npos || 
               a.find(temp) != string::npos) {
                return true;
            }
            temp += temp[0];
            temp.erase(0, 1);
        }
    }
    return false;
}