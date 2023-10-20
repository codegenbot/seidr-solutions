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
        //cout << input << endl;
        stringstream ss(input);
        string word;
        while(ss >> word){
            //cout << word << endl;
            bool flag = false;
            for(int i = 0; i < word.size(); i++){
                if(word[i] == '-'){
                    flag = true;
                }
            }
            if(flag == false){
                cout << word << " ";
            }
            else{
                string res = "";
                stringstream ss2(word);
                string word2;
                while(getline(ss2, word2, '-')){
                    if(word2.size() > 0){
                        res += toupper(word2[0]);
                        res += word2.substr(1);
                    }
                }
                cout << res << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
