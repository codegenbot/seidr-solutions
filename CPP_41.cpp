int car_race_collision(int n) {
    int collision = 0;
    for (int i = 1; i <= n; i++) {
        if ((i % 4 == 0 && i % 8 != 0) || (i % 8 == 0)) {
            cout << "Collision at car number " << i << endl;
            collision++;
        }
    }
    return collision;

}

int main() {
    int n;
    cout << "Enter the number of cars: ";
    cin >> n;
    cout << "Number of collisions: " << car_race_collision(n) << endl;
    return 0;
}