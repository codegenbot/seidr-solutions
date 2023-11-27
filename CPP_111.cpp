#include <map>
#include <string>

bool isSame(const map<char,int>& a, const map<char,int>& b);

map<char,int> histogram(string test);

map<char,int> histogram(string test){
    map<char, int> result;
    string letter;
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            letter += test[i];
        }
        else{
            result[letter]++;
            letter = "";
        }
    }
    result[letter]++;
    return result;
}

bool isSame(const map<char,int>& a, const map<char,int>& b){
    return a == b;
}

int main() {
    assert (isSame(histogram("a") , {{'a', 1}}));
    return 0;
}