Here is the completed code:

```cpp
#include<stdio.h>
#include<math.h>
using namespace std;

bool iscuber(int a) {
    int i = 1;
    while (i * i * i <= a) {
        if (i * i * i == a)
            return true;
        i++;
    }
    return false;
}