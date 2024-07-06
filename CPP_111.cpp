#include<stdio.h>
#include<string>
#include<map>
using namespace std;

map<char,int> histogram(string test){
    map<char,int> result;
    if(test.empty()) return result;

    int maxCount = 0, tieCount = 0;
    char tiedLetter = ' ';

    for(char c : test){
        if(result.find(c) == result.end()){
            result[c] = 1;
            maxCount++;
        } else {
            result[c]++;
            if(result[c] > maxCount){
                maxCount = result[c];
                tieCount = 0;
                tiedLetter = ' ';
            } else if(result[c] == maxCount && c != tiedLetter){
                tieCount++;
                tiedLetter = c;
            }
        }
    }

    for(auto it = result.begin(); it != result.end(); ++it){
        if(it->second == maxCount) cout << "{" << it->first << ", " << it->second << "}";
        else if(tieCount > 0) cout << "," << endl << "      {" << it->first << ", " << it->second << "}";
    }
    cout << endl;
    
    return result;
}