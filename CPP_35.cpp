#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    vector<float> l;
    float maxVal = *max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    cout << "Maximum value: " << maxVal << endl;
    return 0;
}