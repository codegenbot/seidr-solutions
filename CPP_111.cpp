#include <iostream>
#include <string>
#include <map>
#include <cassert>

using namespace std;

map<char,int> histogram(string test){
    map<char, int> result;
    if(test.empty()){
        return result;
    }
    string letter;
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            letter += test[i];
        }
        else{
            if(result.find(letter[0]) != result.end()){
                result[letter[0]]++;
            }
            else{
                result[letter[0]] = 1;
            }
            letter = "";
        }
    }
    if(!letter.empty()){
        if(result.find(letter[0]) != result.end()){
            result[letter[0]]++;
        }
        else{
            result[letter[0]] = 1;
        }
    }
    return result;
}

bool issame(const map<char,int>& a, const map<char,int>& b){
    return a == b;
}

int main() {
    assert(issame(histogram("a") , {{'a', 1}}));
    // more test cases here
    return 0;
}