#include<stdio.h>
#include<string>
#include<map>
using namespace std;

map<char,int> histogram(string test){
    map<char,int> freq;

    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            freq[test[i]]++;
        }
    }

    int maxFreq = 0;
    for(auto it = freq.begin(); it != freq.end(); it++){
        if(it->second > maxFreq){
            maxFreq = it->second;
        }
    }

    map<char,int> result;
    for(auto it = freq.begin(); it != freq.end(); it++){
        if(it->second == maxFreq){
            result[it->first] = it->second;
        }
    }

    return result;
}