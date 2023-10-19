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
    while(cin>>input){
        string temp;
        string output;
        for(int i = 0; i < input.size(); i++){
            if(input[i] == '-'){
                if(temp.size() > 0){
                    output += temp[0] - 'a' + 'A';
                    output += temp.substr(1);
                }
                output += ' ';
                temp = "";
            }
            else if(input[i] == ' '){
                if(temp.size() > 0){
                    output += temp[0] - 'a' + 'A';
                    output += temp.substr(1);
                }
                output += ' ';
                temp = "";
            }
            else{
                temp += input[i];
            }
        }
        if(temp.size() > 0){
            output += temp[0] - 'a' + 'A';
            output += temp.substr(1);
        }
        cout<<output<<endl;
    }
    return 0;
}
