#include<string>
#include<cstring>

int my_strlen(string str){
    int count = 0;
    for(int i=0;str[i];i++){
        count++;
    }
    return count;
}

int main(){
    assert(my_strlen("asdasnakj") == 11); 
    return 0;
}