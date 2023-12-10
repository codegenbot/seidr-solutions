```
#include <iostream>
#include <cmath>
using namespace std;

double calculate_bounciness(double starting_height, double height_after_first_bounce) {
    return (height_after_first_bounce / starting_height);
}

int main() {
    double starting_height, height_after_first_bounce;
    cin >> starting_height >> height_after_first_bounce;
    cout << calculate_bounciness(starting_height, height_after_first_bounce) << endl;
    return 0;
}
```