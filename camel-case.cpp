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
#include <unordered_set>
#include <algorithm>
#include <unordered_map>
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

// method1:
/*
bool is_char(char c){
    return (c >='a' && c<='z') || ( c >='A' && c <= 'Z');
}

void print_camel(string& s,int s_idx,int e_idx){
    int i = s_idx,j = s_idx;
    while(i < e_idx && j <= e_idx){
        if(is_char(s[j])) j++;
        else{
            if(i == s_idx){
                // if the first letter, don't change
                i++; j++;
            }
            else{
                // cout<<s<<endl;
                s[i] = toupper(s[i]);
                // cout<<s<<endl;
                i++;j++;
            }
        }
    }
    s[i] = toupper(s[i]);
    cout<<s[i];
}

string solve(string str){
    int i = 0,j=0;
    string res = "";
    while(i<str.size()){
        // cout<i<<" "<<j<<endl;
        if(str[i] == ' '){
            res += str[i];
            i++; j++;
        }
        else if(str[i] == '-'){
            if(str[i+1] == '-') {
                j++; i += 2;
            }
            else{
                while(str[j] != ' ' && (j-i)>0){
                    // cout<<i<<" "<<j<<endl;
                    print_camel(str,i,j-1);
                    i = j+1;
                }
                j++; i++;
                // solve(str.substr(i+1,j-i-1));
                // res += str[i];
                // i++; j++;
            }
        }
        else j++;
    }
    print_camel(str,i,j-1);
    cout<<str<<endl;
    return res;
}
*/

// method2:
void camel(string& s){
    for(int i = 0;i<s.size();i++){
        if(isalpha(s[i]) && (i==0 || !isalpha(s[i-1]))) s[i] = toupper(s[i]);
    }
    int i = 0;
    while(i<s.size()){
        if(s[i] == '-' || s[i] == ' '){
            s.erase(i,1);
        }
        else i++;
    }
    // cout<<s<<endl;
    cout<<s<<endl;
}

bool is_alpha(char c){
    return (c-'a'>=0 && c-'a'<=25)  || (c-'A'>=0 && c-'A'<=25);
}

void camel2(string& s){
    vector<int> space(s.size(),0);
    int i = 0,j=0;
    while(i<s.size()){
        if(s[i] == ' ' || s[i] == '-'){
            space[j] = i;
            j++; i++;
        }
        else i++;
    }
    if(j ==0){
        // no space
    }
    else{
        space[j] = s.size();
        s[0] = toupper(s[0]);
        for(int i = 1;i<=j;i++){
            int a = space[i-1]+1, b= space[i]-1;
            s[a] = toupper(s[a]);
            // cout<<a<<" "<<b<<endl;
            // cout<<s[a]<<endl;
        }
        int k = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]!=' ' && s[i]!='-') s[k++] = s[i];
        }
        s = s.substr(0,k);
    }
    cout<<s<<endl;
}


int main() {
    string s;
    while(getline(cin,s)){
        // solve(s);
        camel(s);
        // camel2(s);
    }
}
