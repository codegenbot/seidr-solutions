#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example,
input:

output:

input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWords
input:
two words
output:
two words
input:
all separate words
output:
all separate words
*/
void toCamel(string &s){
    int len = s.size();
    int i = 0;
    while(i<len){
        if(s[i]==' '){
            s.erase(i,1);
            len--;
        }else{
            i++;
        }
    }
    i = 0;
    while(i<len){
        if(s[i]=='-'){
            s.erase(i,1);
            len--;
            s[i] = toupper(s[i]);
        }
        i++;
    }
}
int main() {
    string s;
    while(getline(cin,s)){
        toCamel(s);
        cout<<s<<endl;
    }
    return 0;
}
