#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    string temp;
    for (char c : str) {
        if (isalpha(c)) {
            char lower = tolower(c);
            bool found = false;
            for (char d : temp) {
                if (tolower(d) == lower) {
                    found = true;
                    break;
                }
            }
            if (!found)
                temp += c;
        }
    }
    return temp.size();
}