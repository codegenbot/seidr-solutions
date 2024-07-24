#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt){
    vector<string> result;
    int start = 0;
    
    for(int i=0; i<txt.size(); i++){
        if(iscntrl(txt[i]) || isspace(txt[i])){
            if(start != i)
                result.push_back(txt.substr(start, i-start));
            start = i+1;
        }
        else if(txt[i] == ','){
            result.push_back(txt.substr(start, i-start));
            start = i+1;
        }
    }
    
    if(start != txt.size())
        result.push_back(txt.substr(start));
    else
        for(int i='a';i<='z';i++){
            if((txt[0]-i)%2==0) 
                result.push_back(to_string((int)i-'a'));
        }
        
    return result;
}