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
    getline(cin, input);
    string result = "";
    bool flag = false;
    for(int i = 0; i < input.size(); i++){
        if(input[i] == '-'){
            flag = true;
        }
        else if(input[i] == ' '){
            result += ' ';
        }
        else {
            if(flag){
                result += toupper(input[i]);
                flag = false;
            }
            else{
                result += input[i];
            }
        }
    }
    // make sure char at the begining is lowercase
    if (islower(result[0])) {
        result[0] = toupper(result[0]);
    }
    cout << result << endl;
}
