#include <cassert>

bool isCube(int);

void originalFunction() {}

int main(){
    originalFunction();
    assert (isCube(1729) == false);
    return 0;
}