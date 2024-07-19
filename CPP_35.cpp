#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    vector<float> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    auto maxVal = *max_element(l.begin(), l.end());
    cout << "Max value is: " << maxVal << endl;
}