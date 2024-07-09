#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.length(); i++) {
        string temp = a.substr(i) + a.substr(0,i);
        if(temp.find(b) != string::npos)
            return true;
    }
    return false;
}