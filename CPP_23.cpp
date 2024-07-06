```cpp
#include<string>
using namespace std;

int str_length(string str){
    return str.length();
}

int main() {
    const char *input = "asdasnakj";
    string s(input);
    assert (str_length(s) == 12);
    return 0;
}