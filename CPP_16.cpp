#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_distinct_characters(string str) {
    string temp;
    for (char c : str) {
        if (isalpha(c)) {
            temp = tolower(temp);
            if (!temp.empty() && !temp.back() == c) {
                temp += c;
            }
        }
    }
    return temp.size();
}