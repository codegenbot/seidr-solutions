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
    string output = "Random Number: " + to_string(randomNum);
    cout << output << endl;
    return 0;
}