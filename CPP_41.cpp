#include <iostream>
#include <vector>
using namespace std;

int car_race_collision(int n) {
    vector<int> speeds(n);
    for (int i = 0; i < n; ++i) {
        cin >> speeds[i];
    }
    
    int collisions = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (speeds[i] == speeds[j]) {
                ++collisions;
            }
        }
    }

    return collisions;
}

int main() {
    int n;
    cin >> n;
    cout << car_race_collision(n) << endl;
    return 0;
}