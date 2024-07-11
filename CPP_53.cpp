```cpp
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() { 
    srand(time(nullptr)); 
    int randomNum = rand() % 1000; 

    cout << "Random Number: " << to_string(randomNum) << endl; 

    return 0;
}