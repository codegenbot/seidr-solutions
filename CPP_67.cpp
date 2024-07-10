#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;
    string temp;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            continue;
        } else if (isdigit(s[i])) {
            temp += s[i];
        } else {
            if (temp != "") {
                if (temp.find("apples") != string::npos) {
                    total_apples = stoi(temp);
                } else if (temp.find("oranges") != string::npos) {
                    total_oranges = stoi(temp);
                }
                temp = "";
            }
        }
    }

    return n - total_apples - total_oranges;
}