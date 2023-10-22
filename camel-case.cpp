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
    string s;
    bool flag=false;
    string ans="";
    while (getline(cin,s,'\n')){
        for (int i=0;i<s.length();i++){
            int k=0;
            if (s[i]=='-'&&s[i+1]!='-'&&s[i+1]!=' ') {
                flag = true;
                i++;
            }
            else if (s[i]!='-'){
                if (flag){
                    ans+=s[i]-'a'+'A';
                    flag=false;
                }
                else ans+=s[i];
            }
        }
        cout<<ans<<endl;
        ans="";
    }
}
