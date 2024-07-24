```cpp
#include <cmath>
#include <cassert>
#include <cstddef>

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

int main() { 
   assert(iscuber(0) == false);
   if (!iscuber(27)) {
       cout << "Error: The input number is not a perfect cube." << endl;
   } else {
       cout << "The input number is a perfect cube." << endl;
   }
   return 0; 
}