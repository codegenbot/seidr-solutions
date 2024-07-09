#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.length() - b.length() + 1; i++) {
        string temp = a.substr(i, b.length());
        if(temp == b || temp.find(b) != string::npos)
            return true;
    }
    return false;
}