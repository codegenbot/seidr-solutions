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
    string input;
    while(getline(cin, input)){
        string res = "";
        bool prev_is_space = false;
        for(int i = 0; i < input.size(); i++){
            if(input[i] == ' '){
                res += input[i];
                prev_is_space = true;
            }
            else if(input[i] == '-'){
                res += input[i];
                prev_is_space = true;
            }
            else{
                if(prev_is_space){
                    res += toupper(input[i]);
                    prev_is_space = false;
                }
                else{
                    res += input[i];
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
