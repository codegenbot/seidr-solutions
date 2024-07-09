#include<string>
#include<cstring>

int my_strlen(string str){
    int len = 0;
    for(char c : str)
        if(c != '\0')
            len++;
    return len;
}

int main(){
    assert(my_strlen("asdasnakj") == 11); 
    return 0;
}