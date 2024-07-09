int car_race_collision(int n) {
    return n * (n - 1) / 2;
}

int main() {
    int n;
    printf("Enter the number of cars: ");
    scanf("%d", &n);
    printf("Number of collisions: %d\n", car_race_collision(n));
    return 0;
}