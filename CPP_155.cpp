/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
vector<int> v = {};
int count_even = 0;
int count_odd = 0;
if(num < 0){
num = -num;
}
char str[to_string(num).length() + 1];
strcpy(str, to_string(num).c_str());
for(int i = 0; str[i]; i++){
int num_letters = strlen(str);
if(str[i] % 2 == 0 ) {
count_even++;
}
if(str[i] % 2 != 0 ) {
count_odd++;
}
}

v.push_back(count_even);
v.push_back(count_odd);
return v;
}

int main() {
vector<int> v = even_odd_count(12);
for(int i = 0; i < v.size(); i++){
    cout << v[i];
}
}
using namespace std;
vector<int> even_odd_count(int num){
