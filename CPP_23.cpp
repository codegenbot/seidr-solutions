#include <cassert>
#include <string>

int my_strlen(string str){
    return str.length();
}

int main1() {
    assert(my_strlen("asdasnakj") == 12); 
    return 0;
}

int main2() {
    // Other code for main function
}