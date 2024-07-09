#include<string>
using namespace std;

bool cycpattern_check(string a, string b) {
    for(int i = 0; i < a.size(); i++) {
        string temp = a.substr(i);
        if(temp.length() > b.length()) continue;
        for(int j = 0; j <= temp.length() - b.length(); j++) {
            if(temp.substr(j, b.length()).compare(b) == 0)
                return true;
        }
    }
    return false;
}