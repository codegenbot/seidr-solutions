#include <string>
#include <cassert>

int my_strlen(string str){
    int count = 0;
    for (char c : str) {
        count++;
    }
    return count;
}

int main() {
    assert(my_strlen("asdasnakj") == 12); 
    return 0;
}