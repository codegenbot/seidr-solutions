```cpp
#include <iostream>
#include <string>

using namespace std;

bool prime_length(string str){
    int len = str.length();
    for(int i=2; i<=len; i++){
        if(str[i-1] == '0')
            return false;
    }
    return true;
}

int main(){
    cout << boolalpha << prime_length("10") << endl;
    assert (prime_length("0") == false);
    return 0;
}