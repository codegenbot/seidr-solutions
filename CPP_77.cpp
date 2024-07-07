```
#include <cmath>
#include <cassert>

bool iscuber(int a){
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a)
            return true;
        i++;
    }
    return false;
}

int main 
{
    int n; 
    std::cin >> n; 
    assert(iscuber(n) == false); 
    return 0;