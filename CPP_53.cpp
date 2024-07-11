#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
    return a + b;
}

srand(time(nullptr)); 
int randomNum = rand() % 1000; 
cout << "Random Number: " << randomNum << endl;