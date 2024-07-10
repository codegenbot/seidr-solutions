#include <cstdlib>

int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(0));
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    int sum = add(num1, num2);
    cout << "The random numbers are: " << num1 << " and " << num2 << endl;
    cout << "Their sum is: " << sum << endl;
    return 0;
}