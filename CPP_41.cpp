```cpp
#include <iostream>
using namespace std;

int car_race_collision(int n) {
    int collisions = 0;
    for (int i = 1; i <= n; ++i) {
        collisions += (i / 2);
    }
    return collisions;
}

int main() {
    int n;
    printf("Enter the number of cars: ");
    scanf("%d", &n);
    printf("Number of collisions: %d\n", car_race_collision(n));
    return 0;
}