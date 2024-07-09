#include <string>
using namespace std;

int my_strlen(string str){
    return str.length();
}

int main() {
    assert (my_strlen("asdasnakj") == 12);
    
}