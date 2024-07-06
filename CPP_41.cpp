#include <stdio.h>
using namespace std;

int car_race_collision(int n) {
    int total_collisions = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j && i + j == n + 1) {
                total_collisions++;
            }
        }
    }
    return total_collisions;
}

int main() {
    int n;
    printf("Enter the number of cars: ");
    scanf("%d", &n);
    printf("Number of collisions: %d\n", car_race_collision(n));
    return 0;
}