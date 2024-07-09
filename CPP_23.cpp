#include<string>
#include<cstring>

int my_strlen(string str){
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

int main(){
    assert(my_strlen("asdasnakj") == 11); 
    return 0;
}