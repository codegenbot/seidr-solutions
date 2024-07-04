#include <iostream>
#include <unordered_map>
using namespace std;

int car_race_collision(int n) {
    unordered_map<int, int> checkpoint_count;
    int checkpoint;
    int collisions = 0;

    for (int i = 0; i < n; ++i) {
        cin >> checkpoint;
        ++checkpoint_count[checkpoint];
    }

    for (const auto& pair : checkpoint_count) {
        if (pair.second > 1) {
            collisions += pair.second - 1;
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