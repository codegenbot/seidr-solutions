#include <bits/stdc++.h>
using namespace std;
bool issame(pair<char,int> p1,pair<char,int> p2){
    return (p1.first==p2.first && p1.second == p2.second);
}
map<pair<char,int>,int> histogram(string test){
    map<char,int> result;
    int maxCount = 0;
    for(auto& word : split(test, ' ')){
        int count = count(word.begin(), word.end(), *word.begin());
        if(count > maxCount){
            maxCount = count;
            result.clear();
            result[make_pair(*word.begin(),count)] = 1;
        }else if(count == maxCount){
            if(!result.count(make_pair(*word.begin(),count)) || issame(result[rbegin()],make_pair(*word.begin(),count))){
                result[make_pair(*word.begin(),count)] = 1;
            }
        }
    }
    return result;
}

vector<string> split(string str, char ch) {
    vector<string> tokens;
    string token;
    for (auto c : str) {
        if (c == ch) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    tokens.push_back(token);
    return tokens;
}