```cpp
#include <iostream>
using namespace std;

std::string car_race_collision(int n) {
    int collision = 0;
    std::string result = "";
    for (int i = 1; i <= n; i++) {
        if ((i % 4 == 0 && i % 8 != 0) || (i % 8 == 0)) {
            collision++;
            result += "Collision at car " + to_string(i) + "\n";
        }
    }
    return "Number of collisions: " + to_string(collision) + "\n" + result;
}

int main() {
    int n;
    cout << "Enter the number of cars: ";
    cin >> n;
    cout << car_race_collision(n);
    return 0;
}