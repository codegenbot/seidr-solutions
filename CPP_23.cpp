#include<string>
#include<cstring>

int my_strlen(string str){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] != ' ')
            count++;
    }
    return count;
}

int main(){
    assert(my_strlen("asdasnakj") == 9);
    return 0;
}