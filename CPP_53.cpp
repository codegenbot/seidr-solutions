#include <cstdlib>
#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    int x = rand() % 1000;
    cout << "Sum: " << add(x, 10) << endl;
    return 0;
}