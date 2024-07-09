#include <iostream>
using namespace std;

int car_race_collision(int n) {
    int collisions = 1;
    for (int i = 2; i <= n; ++i)
        collisions += i * (n - i + 1);
    return collisions;
}

int main() {
    int n;
    printf("Enter the number of cars: ");
    scanf("%d", &n);
    printf("Number of collisions: %d\n", car_race_collision(n));
    return 0;
}