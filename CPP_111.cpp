#include<stdio.h>
#include<string>
#include<map>
using namespace std;

map<char,int> histogram(string test){
    map<char,int> result;
    string temp;
    int maxCount = 0;
    
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            temp += test[i];
        } else {
            if (!result.empty()) {
                for (auto it = result.begin(); it != result.end(); it++) {
                    if (it->second > maxCount) {
                        maxCount = it->second;
                    }
                }
            }
            temp = "";
        }
    }

    if (!temp.empty()) {
        if (!result.empty()) {
            for (auto it = result.begin(); it != result.end(); it++) {
                if (it->second == maxCount) {
                    result[temp[0]]++;
                }
            }
        } else {
            result[temp[0]] = 1;
        }
    }

    return result;
}