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
int main() {
    string str;
    string res;
    while(getline(cin,str)){
        bool flag = false;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == ' '){
                flag = true;
                res += str[i];
                continue;
            }
            if(str[i] == '-'){
                flag = true;
                continue;
            }
            if(flag){
                res += toupper(str[i]);
                flag = false;
            }else{
                res += str[i];
            }
        }
        cout << res << endl;
        res.clear();
    }
    return 0;
}
