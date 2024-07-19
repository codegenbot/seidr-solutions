#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    vector<float> l;
    float max = *max_element(l.begin(),l.end());
    cout << "Maximum value in the list is: " << max << endl;
    return 0;
}