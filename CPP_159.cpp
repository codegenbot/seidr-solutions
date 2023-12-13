#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int totalEaten = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    result.push_back(totalEaten);
    result.push_back(left);
    return result;
}

int main() {
    vector<int> output = eat(4, 5, 1);
    assert(output == vector<int>{5, 0});
    cout << output[0] << " " << output[1] << endl;
    return 0;
}