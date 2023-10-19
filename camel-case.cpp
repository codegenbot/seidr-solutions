#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
You are observing traffic at an intersection and counting the types of vehicles that pass through over the course of the hour. Given string a where each character represents a type of vehicle, return a string where all occurrences of (g)reen, (r)ed, and (b)lue have been removed in favor of characters that increase in ASCII order until the first letter not in "grb" is reached.
For example, given the input string "gerbgeegrbr", your function should return the string "egg".

Here are some examples:

removeGBR("grrgbbrgr") -> "ee"
removeGBR("rgbrg") -> "e"
removeGBR("grbg") -> "e"
removeGBR("erbg") -> "ee"
You can safely assume that all characters will be lowercase, and that there will be at least two appearances of a character before it exits the string.
*/
int main() {
    string s;
    while (getline(cin, s)) {
        string t = "";
        bool isFirst = true;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                t += ' ';
                isFirst = true;
            } else if (s[i] == '-') {
                t += ' ';
                isFirst = true;
            } else if (isFirst) {
                t += toupper(s[i]);
                isFirst = false;
            } else {
                t += s[i];
            }
        }
        cout << t << endl;
    }
    return 0;
}
