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
  while(getline(cin,str)){
    int las = 0;
    for(int i = 0;i<str.length();i++){
      if(str[i]=='-' || str[i]==' '){
        reverse(str.begin()+las,str.begin()+i);
        las=++i;
        reverse(str.begin()+i,str.begin()+i+1);

      }
    }
    reverse(str.begin()+las,str.end());
    las=0;
    for(int i = 0;i<str.length();i++){
      if(str[i]==' ' || str[i] == '-'){
        reverse(str.begin()+las,str.begin()+i);
        las=++i;
      }
    }
    reverse(str.begin()+las,str.end());
    cout<<str<<endl;
  }
}
