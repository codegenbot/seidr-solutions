// Define the function signature
int car_race_collision(int n) {
    // Implement the function logic
    return n * (n - 1) / 2;
}

int main() {
    // Test the function with an assertion
    assert(car_race_collision(10) == 100);
    return 0;
}