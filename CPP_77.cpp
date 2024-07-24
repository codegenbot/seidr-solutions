#include <cmath>
#include <cassert>
using namespace std;

bool iscuber(int a){
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a)
            return true;
        i++;
    }
    return false;

}

int main(){
   assert(iscuber(1729) == false);