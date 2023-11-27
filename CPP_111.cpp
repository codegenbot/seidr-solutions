#include <map>
#include <string>
#include <cassert>

using namespace std;

map<char,int> histogram(string test){
    map<char,int> result;
    string letter;
    int count = 0;
    
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            letter += test[i];
        }
        else{
            if(letter.length() > 0){
                result[letter[0]]++;
                count = max(count, result[letter[0]]);
                letter = "";
            }
        }
    }
    
    if(letter.length() > 0){
        result[letter[0]]++;
        count = max(count, result[letter[0]]);
    }
    
    map<char,int> output;
    for(auto it=result.begin(); it!=result.end(); it++){
        if(it->second == count){
            output[it->first] = it->second;
        }
    }
    
    return output;
}

bool issame(const map<char,int>& a, const map<char,int>& b){
    return a == b;
}

int main(){
    assert(issame(histogram("a") , {{'a', 1}}));
    assert(issame(histogram("ab ab ab") , {{'a', 3}}));
    assert(issame(histogram("hello world") , {{'l', 3}, {'o', 2}}));
    
    return 0;
}