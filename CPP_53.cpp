```cpp
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int add(int x, int y) {
    return x + y;
}

namespace std; 
srand(time(0)); 
int randomNum = rand() % 1000; 
string strRandomNum = to_string(randomNum); 
cout << "Random Number: " << strRandomNum << endl;