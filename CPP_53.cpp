#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
    return a + b;
}

std::srand(std::time(nullptr)); 
int randomNum = rand() % 1000; 
std::cout << "Random Number: " << randomNum << std::endl;