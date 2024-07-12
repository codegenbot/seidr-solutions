#include<string>
#include<cstring>

int custom_strlen(string str){
    return str.length();
}

int main(){
    assert (custom_strlen("asdasnakj") == 12);
    // add more test cases if needed
    return 0;
}