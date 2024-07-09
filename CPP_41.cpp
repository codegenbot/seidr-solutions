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

{