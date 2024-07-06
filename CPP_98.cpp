```cpp
#include <string>
#include <cctype>  

using namespace std;

int count_upper(string s){
    int count = 0;
    for(int i=0; i<s.length(); i=i+1){
        if(isupper(s[i])){
            count++;
        }
    }
    return count;
}