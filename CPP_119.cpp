#include <iostream>
#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst){
    int count = 0;
    for (int i = 0; i < lst.size(); i++) {
        string str = lst[i];
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == '(') {
                count++;
            } else {
                count--;
            }
            if (count < 0) {
                return "No";
            }
        }
    }
    if (count == 0) {
        return "Yes";
    } else {
        return "No";
    }
}