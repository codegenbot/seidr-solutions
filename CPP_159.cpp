#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int eaten = number + max(0, need - (remaining - number));
    int left = min(eaten + need, remaining);
    return {eaten, remaining - left};
}