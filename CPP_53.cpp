#include <cstdlib>

int add(int x, int y) {
    return x + y;
}

int main() {
    srand(time(0));
    int num1 = rand() % 10;
    int num2 = rand() % 10;
    cout << "Random numbers: " << num1 << " and " << num2 << endl;
    cout << "Sum of the numbers: " << add(num1, num2) << endl;
}