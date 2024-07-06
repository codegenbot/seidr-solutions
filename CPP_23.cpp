#include<string>
using namespace std;

int str_length(const char* str){
    string s(str);
    return s.length();
}

int main() {
    assert (str_length("asdasnakj") == 12);
    return 0;
}