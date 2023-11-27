#include <map>
#include <cassert>

map<char,int> histogram(string test){
    map<char, int> result;
    string word = "";

    for(int i = 0; i < test.length(); i++){
        if(test[i] != ' '){
            word += test[i];
        }
        else{
            result[word]++;
            word = "";
        }
    }

    result[word]++;

    return result;
}

bool issame(map<char,int>& a, map<char,int>& b){
    return a == b;
}

int main(){
    assert (issame(histogram("a") , {{'a', 1}}));

    return 0;
}