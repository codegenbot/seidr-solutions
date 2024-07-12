#include<string>
#include<cstring>
#include<cassert>

int main(){
    assert (custom_strlen("asdasnakj") == 12);
    // add more test cases if needed
    int custom_strlen(string str){
        return str.length();
    }
    return 0;
}