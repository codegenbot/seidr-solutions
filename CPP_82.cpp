```cpp
#include <iostream>
#include <string>

using namespace std;

bool prime_length(string str){
    int len = str.length();
    for(int i=2; i<=len; i++){
        string temp = to_string(i);
        if(str.find(temp) != string::npos)
            return false;
    }
    return true;
}

int main(){
    cout << boolalpha << prime_length("10") << endl;
    assert (prime_length("0") == false);
    return 0;
}