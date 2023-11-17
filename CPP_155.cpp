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
using namespace std;
vector<int> even_odd_count(int num){
vector<int> result;
int even = 0, odd = 0;
char str[10];
sprintf(str, "%d", num);
for (int i = 0; i <strlen(str); i++) {
    if (num[i] % 2 == 0) {
     even++;
    }
    else {
      odd++;
    }
   }
result.push_back(even);
result.push_back(odd);
return result;
}
return{ even,odd };
}
int main(){
return 0;
}
