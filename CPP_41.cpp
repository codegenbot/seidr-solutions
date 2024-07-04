#include <iostream>
using namespace std;

int car_race_collision(int n) {
    return n * (n - 1) / 2;
}

int main() {
    int n;
    cin >> n;
    cout << car_race_collision(n) << endl;
    return 0;
}