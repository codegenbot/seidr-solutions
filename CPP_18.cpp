/*
Find how many times a given substring can be found in the original string. Count overlaping cases.
>>> how_many_times("", "a")
0
>>> how_many_times("aaa", "a")
3
>>> how_many_times("aaaa", "aa")
3
*/
#include<stdio.h>
#include<string>
using namespace std;
int how_many_times(string str,string substring){
    int count = 0;
    int j = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == substring[j]){
            j++;
            if(j == substring.size()){
                count++;
                j = 0;
            }
        }
        else{
            j = 0;
            if(str[i] == substring[j]){
                j++;
            }
        }
    }
    return count;
}

int main(){
    printf("%d\n",how_many_times("","a"));
    printf("%d\n",how_many_times("aaa","a"));
    printf("%d\n",how_many_times("aaaa","aa"));
    return 0;
}
