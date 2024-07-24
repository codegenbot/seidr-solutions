#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int eaten = number + need - remaining;
    if (eaten > 0) {
        return {(number + need), min(eaten, remaining)};
    } else {
        return {(number + need), 0};
    }
}