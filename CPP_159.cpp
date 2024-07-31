#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return vector<int>{eaten, left};
}

int main() {
    assert(eat(4, 5, 1) == vector<int>{5, 1});
    return 0;
}