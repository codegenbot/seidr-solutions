#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    string temp;
    for (char c : str) {
        if (isalpha(c)) { // check if character is a letter
            char lower = tolower(c); // convert to lowercase
            bool found = false;
            for (char d : temp) {
                if (d == lower) {
                    found = true;
                    break;
                }
            }
            if (!found)
                temp += lower; 
        }
    }
    return temp.size();
}