```cpp
#include <iostream>

bool iscuber(int n){
    int i = 1;
    while (i * i * i <= n) {
        if (i * i * i == n)
            return true;
        i++;
    }
    return false;
}

int main() {
    for(int a = 0;a<10000;a++){
       if(iscuber(a)){
           std::cout << a << " is a perfect cube." <<std::endl;
       }else{
           std::cout << a << " is not a perfect cube." <<std::endl;
       }
    }
    return 0;
}