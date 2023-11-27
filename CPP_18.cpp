#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int how_many_times(string str, string substring){
    int count = 0;
    int sub_len = substring.length();
    int str_len = str.length();
    
    for(int i = 0; i <= str_len - sub_len; i++){
        bool found = true;
        for(int j = 0; j < sub_len; j++){
            if(str[i+j] != substring[j]){
                found = false;
                break;
            }
        }
        if(found){
            count++;
        }
    }
    return count;
}

int main(){
    assert (how_many_times("john doe", "john") == 1);
    return 0;
}