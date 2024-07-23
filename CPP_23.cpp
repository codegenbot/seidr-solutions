#include <string>
#include <assert.h>

int my_strlen(string str) {
    int length = 0;
    for (char c : str) {
        length++;
    }
    return length;
}

int main(){
    assert (my_strlen("asdasnakj") == 12); 
}