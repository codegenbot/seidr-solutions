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
#include <sstream>
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
        stringstream ss(input);
        string word;
        bool first = true;
        while(ss >> word){
            if(word.find("-") == string::npos){
                if(!first)
                    cout << " ";
                cout << word;
                first = false;
                continue;
            }
            stringstream ss2(word);
            string word2;
            bool first2 = true;
            while(getline(ss2, word2, '-')){
                if(!first2)
                    cout << word2[0] - 'a' + 'A';
                else
                    cout << word2;
                first2 = false;
                if(word2.length() > 1)
                    cout << word2.substr(1);
            }
            first = false;
        }
        cout << endl;
    }
    return 0;
}
