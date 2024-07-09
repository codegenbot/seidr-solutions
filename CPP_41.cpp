```c++
#include <iostream>
using namespace std;

int car_race_collision(string s) {
    int n = stoi(s);
    int collision = 0;
    for (int i = 1; i <= n; i++) {
        if ((i % 4 == 0 && i % 8 != 0) || (i % 8 == 0)) {
            collision++;
        }
    }
    return collision;

}

int main() {
    string s;
    cin >> s;
    cout << "Number of collisions: " << car_race_collision(s) << endl;
    return 0;
}