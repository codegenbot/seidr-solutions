```c++
#include <iostream>
#include <cmath>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    int result = findGCD(a, b);
    cout << "The GCD of the given numbers is: " << result << endl;
    return 0;
}

int findGCD(int a, int b) {
    if (b == 0) return abs(a);
    while (b != 0) {
        int temp = b;
        b = abs(a) % abs(b);
        a = temp;
    }
    return abs(b); 
}