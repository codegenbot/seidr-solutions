#include <cstdlib>  // Add this line

int add(int x, int y) {
    return x + y;
}

int main() {
    int x = rand() % 1000;  // Update this line
    int y;
    cin >> y;
    cout << add(x, y) << endl;
    return 0;
}