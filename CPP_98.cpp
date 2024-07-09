#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

int count_upper(string s);

int count_upper(string s){
    int count = 0;
    string vowels = "AEIOU";
    for (int i = 0; i < s.length(); i += 2) {
        if (isupper(s[i]) && vowels.find(s[i]) != string::npos) {
            count++;
        }
    }
    return count;
}

int main(){
    assert(count_upper("EEEE") == 2);
}