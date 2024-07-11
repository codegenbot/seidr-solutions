#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main() {
    srand(time(nullptr)); 
    int randomNum = rand() % 1000; 
    string strRandomNum = to_string(randomNum); 
    cout << "Random Number: " << strRandomNum << endl;
}