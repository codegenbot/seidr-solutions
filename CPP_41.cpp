#include <stdio.h>
using namespace std;

int car_race_collision(int n) {
    int collisions = 0;
    for (int i = 1; i <= n / 2; i++) {
        for (int j = n / 2 + i; j >= n - i; j--) {
            if (i + j == n) {
                collisions++;
            }
        }
    }
    return collisions;
}

//int main() {
//    int n;
//    printf("Enter the number of cars: ");
//    scanf("%d", &n);
//    printf("Number of collisions: %d\n", car_race_collision(n));
//    return 0;
//}