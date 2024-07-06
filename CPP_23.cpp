#include<string>
using namespace std;

int str_length(string str){
    return str.length();
}

int main() {
    assert (str_length("asdasnakj") == 12);
    return 0;
}