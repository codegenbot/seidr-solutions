#include <bits/stdc++.h>
using namespace std;

bool issame(string s1, string s2)
{
    if(s1.length() != s2.length())
        return false;
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] != s2[i])
            return false;
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    string temp = "";
    for (char x : s) {
        bool flag = false;
        for (char y : c) {
            if (x == y) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            temp += x;
        }
    }
    vector<string> result;
    string str1 = temp;
    reverse(str1.begin(), str1.end());
    string str2 = temp;
    if (issame(str1, str2))
        result.push_back("True");
    else
        result.push_back("False");
    result.push_back(temp);
    return result;
}