#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    string res = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found)
            res += ch;
    }
    
    string temp = res;
    reverse(temp.begin(), temp.end());
    vector<string> result({res, (temp == res ? "True" : "False")});
    return result;
}