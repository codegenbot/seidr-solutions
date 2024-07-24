```cpp
#include <cmath>
#include <cassert>
#include <cstddef> 
#include <iostream>
using namespace std;

bool isCube(int a){
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a)
            return true;
        i++;
    }
    return false;

}

int main() { 
   assert(isCube(0) == false);
   cout << "Enter an integer: ";
   int num;
   cin >> num;
   if(isCube(num))
       cout << num << " is a cube number." << endl;
   else
       cout << num << " is not a cube number." << endl;
   return 0; 
}