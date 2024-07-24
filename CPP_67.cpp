#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int total = 0;
    string temp = "";
    for (char c : s) {
        if (c == ' ') {
            int val = stoi(temp);
            if (temp.find("apples") != string::npos)
                total += val;
            else if (temp.find("oranges") != string::npos)
                total += val;
            temp = "";
        } else
            temp += c;
    }
    return n - total;
}