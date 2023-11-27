#include <iostream>
#include <map>
#include <cassert>

using namespace std;

map<char,int> histogram(string test){
    map<char, int> result;
    string letter;
    int count = 0;
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

bool issame(const map<char, int>& a, const map<char, int>& b){
    return a == b;
}

int main(){
    map<char,int> (*histogramPtr)(string) = histogram;

    assert(issame(histogramPtr("a"), {{'a', 1}}));

    cout << "All tests passed!" << endl;

    return 0;
}