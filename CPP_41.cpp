```cpp
#include <iostream>
using namespace std;

int car_race_collision(int n) {
    int collision = 0;
    for (int i = 1; i <= n; i++) {
        if ((i % 4 == 0 && i % 8 != 0) || (i % 8 == 0)) {
            collision++;
        }
    }
    return collision;

}

int main() {
    std::string s;
    cin >> s; // Read the input string
    int n = stoi(s); // Convert the string to an integer
    cout << "Number of collisions: " << car_race_collision(n) << endl;
    return 0;
}