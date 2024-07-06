```cpp
#include <string>
#include <cctype>  

using namespace std;

int count_upper(string s){
    int count = 0;
    for(int i=1; i<s.length(); i=i+2){
        if(isupper(s[i])){
            count++;
        }
    }
    return count;
}

int main() {
    assert (count_upper("EEEE") == 2);
}