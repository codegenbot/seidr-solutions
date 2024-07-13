#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string temp = "";
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        if (isdigit(s[i])) {
            temp += s[i];
        } else if (temp != "") {
            pos = i;
            break;
        }
    }

    int total_apples_oranges = stoi(temp);
    int remaining_fruits = n - total_apples_oranges;

    return remaining_fruits;
}