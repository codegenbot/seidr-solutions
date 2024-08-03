#include <cassert>

bool any_int(double a, double b, double c){
    if((a == b + c) || (b == a + c) || (c == a + b)){
        if(a == (int)a && b == (int)b && c == (int)c){
            return true;
        }
    }
    return false;
}

int main(){
    assert(any_int(3.01, 4, 7) == false);
    return 0;
}