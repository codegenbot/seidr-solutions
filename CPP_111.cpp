#include<stdio.h>
#include<string>
#include<map>
using namespace std;

map<char,int> histogram(string test){
    map<char,int> result;
    int maxCount = 0;
    
    for(char c : test) {
        if(c != ' ') {
            if(result.find(c) == result.end()) {
                result[c] = 1;
            } else {
                result[c]++;
            }
            
            if(result[c] > maxCount)
                maxCount = result[c];
        }
    }
    
    for(auto it : result) {
        if(it.second == maxCount)
            cout << "{" << it.first << ", " << it.second << "} ";
    }
    cout << endl;
    
    return result;
}