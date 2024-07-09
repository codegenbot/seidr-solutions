#include <string>
#include <cassert>

int my_strlen(string str){
    int len = 0;
    for (char c : str) {
        len++;
    }
    return len;
}

int main() {
    assert(my_strlen("asdasnakj") == 12); 
    return 0;
}